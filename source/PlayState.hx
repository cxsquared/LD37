 package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import actors.RoomItem;

class PlayState extends FlxState
{

    var background:FlxSprite;

	override public function create():Void
	{
		super.create();

        background = new FlxSprite();
        background.loadGraphic(AssetPaths.room__png);
        add(background);

        addItems();
	}

    private function addItems():Void
    {
        var items = ActorFactory.getInstance().parseItems("assets/data/itemsData.json");
        for (item in items)
        {
            add(item);
        }
    }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

    private function createItems():Void
    {
    }

    private function linkItems():Void
    {
    }
}
