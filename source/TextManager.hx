package;

import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText.FlxTextAlign;
import flixel.group.FlxGroup;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.addons.text.FlxTypeText;

typedef TextData = { text:String, length:Float, showOnTop:Bool, color:FlxColor }

class TextManager extends FlxGroup
{
    private static var instance:TextManager;
    public static function getInstance():TextManager
    {
        if (instance == null)
        {
            instance = new TextManager();
        }

        return instance;
    }

    private var background:FlxSprite;
    private var textSprite:FlxTypeText;
    private var textTimer:FlxTimer;
    private var textQueue:Array<TextData>;
    public var typingText:Bool = false;
    private var currentDelay:Float = 2.5;
    public var showingText(default, null):Bool = false;

    private function new()
    {
        super();
        background = new FlxSprite();
        background.makeGraphic(Std.int(FlxG.width), Std.int(FlxG.height/3), FlxColor.fromRGBFloat(.25,.25,.25,.85));
        background.y = FlxG.height - FlxG.height/3;
        background.alpha = -1;
        add(background);

        textSprite = new FlxTypeText(9, FlxG.height - FlxG.height/4 + 10, FlxG.width-20, "This is a test for the text", 72);
        textSprite.alignment = FlxTextAlign.CENTER;
        textSprite.setFormat(AssetPaths.GeosansLight__ttf, 71);
        textSprite.alpha = -1;
        textSprite.setTypingVariation();
        add(textSprite);

        textTimer = new FlxTimer();
        textQueue = new Array<TextData>();

    }

    public static function reset()
    {
        if (instance != null)
        {
            instance.destroy();
            instance = null;
        }
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (FlxG.mouse.justPressed)
        {
            if (showingText)
            {
                handleNextText(); 
            }
        }
    }


    public function showText(text:String, ?length:Float=4, ?color:FlxColor=FlxColor.WHITE, ?showOnTop:Bool=false):Void
    {
        if (!showingText)
        {
            textSprite.resetText(text);
            textSprite.color = color;
            placeText(showOnTop);
            setSounds(showOnTop);
            textSprite.alpha = 1;
            FlxTween.tween(background, {alpha:1}, .35, {onComplete:startText});
            
            currentDelay = length;
            showingText = true;
        }
        else
        {
            var textData:TextData = {text:text,length:length,showOnTop:showOnTop, color:color};
            textQueue.push(textData);
        }
    }

    private function startText(?t:FlxTween):Void
    {
        typingText = true;
        textTimer.cancel();
        textSprite.start(.05, false, false, typingDone);
    }

    private function typingDone():Void
    {
        typingText = false;
        textTimer.cancel();
        FlxG.log.add("Text timer cancled and started again");
        textTimer.start(length, onTimer, 1);
    }

    private function onTimer(t:FlxTimer):Void
    {
        FlxG.log.add("onTimer called");
        handleNextText();
    }

    private function handleNextText():Void
    {
        if (textQueue.length == 0 && !typingText)
        {
            FlxTween.tween(textSprite, {alpha:0}, .15);
            FlxTween.tween(background, {alpha:0}, .35);
            showingText = false;
            textTimer.cancel();
        }
        else if (typingText)
        {
            textSprite.skip();
        }
        else
        {
            var newTextData = textQueue.shift();
            textSprite.resetText(newTextData.text);
            textSprite.color = newTextData.color;
            placeText(newTextData.showOnTop);
            setSounds(newTextData.showOnTop);
            currentDelay = length;
            startText();
        }
    }

    private function placeText(onTop:Bool=false):Void
    {
        var yPos = onTop ? 0 : FlxG.height - FlxG.height/4;
        textSprite.y = yPos + 10;
        background.y = yPos;
    }

    private function setSounds(isWife:Bool=false):Void
    {
        textSprite.sounds = isWife ? SoundManager.getInstance().getWifeSounds() : SoundManager.getInstance().getPlayerSounds();
    }

}
