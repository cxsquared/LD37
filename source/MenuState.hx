package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.text.FlxText.FlxTextAlign;

class MenuState extends FlxState
{
    private var titleText:FlxText;
    private var startButton:FlxText;

	override public function create():Void
	{
		super.create();

        setupTitle();
        setupStartButton();

        SoundManager.getInstance().playMusic();
	}

    private function setupTitle():Void
    {
        titleText = new FlxText(0,100,FlxG.width,TextLineManager.getInstance().getLine("title"),144);
        titleText.setFormat(AssetPaths.GeosansLight__ttf, 144);
        titleText.alignment = FlxTextAlign.CENTER;
        add(titleText);
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
            FlxG.switchState(new PlayState());
        }
	}
}
