 package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{

    var background:FlxSprite;

	override public function create():Void
	{
		super.create();

        background = new FlxSprite();
        background.loadGraphic(AssetPaths.room__png);
        add(background);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}
