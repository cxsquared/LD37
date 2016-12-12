package; 

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.text.FlxText.FlxTextAlign;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;

class QuoteScreen extends FlxState
{
    private var quoteText:FlxText;
    private var authorText:FlxText;
    private var nothingText:FlxText;
    private var nothingTimer:FlxTimer;
    private var screenTimer:FlxTimer;

	override public function create():Void
	{
		super.create();

        setupTitle();

        screenTimer = new FlxTimer();
        screenTimer.start(10, nextScreen, 1);

        nothingTimer = new FlxTimer();
        nothingTimer.start(5, setUpNothing, 1);

        SoundManager.getInstance().stopMusic();
	}

    private function setupTitle():Void
    {
        quoteText = new FlxText(FlxG.width/8,100,FlxG.width - FlxG.width/3,TextLineManager.getInstance().getLine("quote"),100);
        quoteText.setFormat(AssetPaths.GeosansLight__ttf, 100);
        quoteText.alpha = 0;
        add(quoteText);
        FlxTween.tween(quoteText, {alpha:1}, 2);

        authorText = new FlxText(FlxG.width/8,quoteText.y + quoteText.height,FlxG.width - FlxG.width/3,TextLineManager.getInstance().getLine("author"), 80);
        authorText.setFormat(AssetPaths.GeosansLight__ttf, 80);
        authorText.alignment = FlxTextAlign.RIGHT;
        authorText.alpha = 0;
        add(authorText);
        FlxTween.tween(authorText, {alpha:1}, 3);
    }

    private function setUpNothing(t:FlxTimer):Void
    {
        nothingText = new FlxText(0, 0, FlxG.width, TextLineManager.getInstance().getLine("nothing"), 62);
        nothingText.setFormat(AssetPaths.GeosansLight__ttf, 72);
        nothingText.alignment = FlxTextAlign.CENTER;
        nothingText.alpha = 0;
        nothingText.y = FlxG.height - nothingText.height;
        add(nothingText);
        FlxTween.tween(nothingText, {alpha:1}, 2);
    }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

        if (FlxG.mouse.justPressed)
        {
            FlxG.switchState(new MenuState());
        }
	}

    private function nextScreen(?t:FlxTimer):Void
    {
        FlxG.switchState(new MenuState());
    }

    override public function destroy():Void
    {
        quoteText.destroy();
        authorText.destroy();
        screenTimer.destroy();
        nothingTimer.destroy();
        if (nothingText != null)
        {
            nothingText.destroy();
        }
        super.destroy();
    }

}
