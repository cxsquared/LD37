package;

import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText.FlxTextAlign;
import flixel.group.FlxGroup;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;

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
    private var textSprite:FlxText;
    private var textTimer:FlxTimer;
    private var textQueue:Array<TextData>;
    public var showingText(default, null):Bool = false;

    private function new()
    {
        super();
        background = new FlxSprite();
        background.makeGraphic(Std.int(FlxG.width), Std.int(FlxG.height/4), FlxColor.fromRGBFloat(.25,.25,.25,.85));
        background.y = FlxG.height - FlxG.height/4;
        background.alpha = 0;
        add(background);

        textSprite = new FlxText(10, FlxG.height - FlxG.height/4 + 10, FlxG.width-20, "This is a test for the text", 72);
        textSprite.alignment = FlxTextAlign.CENTER;
        textSprite.setFormat(AssetPaths.GeosansLight__ttf, 72);
        textSprite.alpha = 0;
        add(textSprite);

        textTimer = new FlxTimer();
        textQueue = new Array<TextData>();
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


    public function showText(text:String, length:Float, color:FlxColor=FlxColor.WHITE, showOnTop:Bool=false):Void
    {
        if (!showingText)
        {
            textSprite.text = text;
            textSprite.color = color;
            placeText(showOnTop);
            FlxTween.tween(textSprite, {alpha:1}, .5);
            FlxTween.tween(background, {alpha:1}, .35);

            textTimer.start(length + .5, onTimer, 1);
            showingText = true;
        }
        else
        {
            var textData:TextData = {text:text,length:length,showOnTop:showOnTop, color:color};
            textQueue.push(textData);
        }
    }

    private function onTimer(t:FlxTimer):Void
    {
        handleNextText();
    }

    private function handleNextText():Void
    {
        if (textQueue.length == 0)
        {
            FlxTween.tween(textSprite, {alpha:0}, .15);
            FlxTween.tween(background, {alpha:0}, .35);
            showingText = false;
        }
        else
        {
            var newTextData = textQueue.pop();
            textSprite.text = newTextData.text;
            textSprite.color = newTextData.color;
            placeText(newTextData.showOnTop);
            textTimer.start(newTextData.length, onTimer, 1);
        }
    }

    private function placeText(onTop:Bool=false):Void
    {
        var yPos = onTop ? 0 : FlxG.height - FlxG.height/4;
        textSprite.y = yPos + 10;
        background.y = yPos;
    }

}
