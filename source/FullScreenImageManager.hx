package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class FullScreenImageManager extends FlxGroup
{
    private static var instance:FullScreenImageManager;
    public static function getInstance():FullScreenImageManager
    {
        if (instance == null)
        {
            instance = new FullScreenImageManager();
        }

        return instance;
    }
    
    public static function reset():Void
    {
        if (instance != null)
        {
            instance.destroy();
            instance = null;
        }
    }

    var background:FlxSprite;
    var image:FlxSprite;
    public var showingImage = false;
    var viewTimer:FlxTimer;

    private function new()
    {
        super();
        background = new FlxSprite();
        background.makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGBFloat(0.65, 0.65, 0.65, 0.5));
        background.alpha = 0;
        add(background);

        image = new FlxSprite();
        image.alpha = 0;
        add(image);

        viewTimer = new FlxTimer();
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (showingImage && image.alpha >= .95 && !TextManager.getInstance().typingText && FlxG.mouse.justPressed)
        {
            fadeOut();
        }
    }

    public function showTie():Void
    {
        image.loadGraphic(AssetPaths.tie__png); //TODO(Cody): Load the tie graphic
        positionImage();
        fadeIn();
        FlxTween.tween(image, {alpha:1}, .5, {onComplete:showTieText});
    }

    public function showBook():Void
    {
        image.loadGraphic(AssetPaths.book__png);
        positionImage();
        fadeIn();
        FlxTween.tween(image, {alpha:1}, .5, {onComplete:showBookText});
    }

    private function positionImage():Void
    {
        image.x = FlxG.width/2 - image.width/2;
        image.y = FlxG.height/2 - image.height/2;
    }

    private function fadeIn():Void
    {
        showingImage = true;
        FlxTween.tween(background, {alpha:1}, .25);
    }

    private function showTieText(t:FlxTween):Void
    {
        startTimer();
        TextManager.getInstance().showText(TextLineManager.getInstance().getLine("tie"), 3); 
    }

    private function showBookText(t:FlxTween):Void
    {
        startTimer();
        TextManager.getInstance().showText(TextLineManager.getInstance().getLine("book"), 3);
    }

    private function startTimer():Void
    {
        viewTimer.start(5, fadeOut, 1);
    }

    private function fadeOut(?t:FlxTimer):Void 
    {
        showingImage = false;
        FlxTween.tween(background, {alpha:0}, .5);
        FlxTween.tween(image, {alpha:0}, .35);
    }

    override public function destroy():Void
    {
        viewTimer.destroy();
        super.destroy();
    }

}
