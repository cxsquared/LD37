package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.text.FlxText.FlxTextAlign;
import flixel.tweens.FlxTween;

class MenuState extends FlxState
{
    private var titleText:FlxSprite;
    private var startButton:FlxText;
    private var codyText:FlxText;
    private var frankText:FlxText;

	override public function create():Void
	{
		super.create();

        setupTitle();
        setupNames();
        setupStartButton();

        SoundManager.getInstance().playMusic();
	}

    private function setupTitle():Void
    {
        titleText = new FlxSprite(0,50);
        titleText.loadGraphic(AssetPaths.logo__png);
        titleText.x = FlxG.width/2 - titleText.width/2;
        add(titleText);
    }

    private function setupNames():Void
    {
        codyText = new FlxText(0,0,FlxG.width/3, TextLineManager.getInstance().getLine("cody"), 64);
        codyText.setFormat(AssetPaths.GeosansLight__ttf, 64);
        codyText.x = 10;
        codyText.y = FlxG.height - codyText.height;
        codyText.alignment = FlxTextAlign.CENTER;
        add(codyText);

        frankText = new FlxText(0,0,FlxG.width/3, TextLineManager.getInstance().getLine("frank"), 64);
        frankText.setFormat(AssetPaths.GeosansLight__ttf, 64);
        frankText.x = FlxG.width - frankText.width - 10;
        frankText.y = FlxG.height - frankText.height;
        frankText.alignment = FlxTextAlign.CENTER;
        add(frankText);
    }

    private function setupStartButton():Void
    {
        startButton = new FlxText(0,0, FlxG.width/3, TextLineManager.getInstance().getLine("start"), 72);
        startButton.setFormat(AssetPaths.GeosansLight__ttf, 72);
        startButton.x = FlxG.width/2 - startButton.width/2;
        startButton.y = FlxG.height - FlxG.height/3 - startButton.height/2;
        startButton.alignment = FlxTextAlign.CENTER;
        add(startButton);
    }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

        if (FlxG.mouse.justPressed)
        {
            FlxTween.tween(titleText, {alpha:0}, 3, {onComplete:nextScene});
            FlxTween.tween(startButton, {alpha:0}, 1);
            FlxTween.tween(codyText, {alpha:0}, 2);
            FlxTween.tween(frankText, {alpha:0}, 2);
        }
	}

    private function nextScene(t:FlxTween):Void
    {
        FlxG.switchState(new PlayState());
    }
}
