 package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import actors.RoomItem;
import haxe.Json;
import openfl.Assets;
import flixel.group.FlxGroup.FlxTypedGroup;

class PlayState extends FlxState
{

    var background:FlxSprite;
    var roomItems:FlxTypedGroup<RoomItem>;

	override public function create():Void
	{
		super.create();

        background = new FlxSprite();
        background.loadGraphic(AssetPaths.room__png);
        add(background);

        addItems();
        linkItems();
	}

    private function addItems():Void
    {
        roomItems = ActorFactory.getInstance().parseItems("assets/data/itemsData.json");
        for (item in roomItems)
        {
            add(item);
        }
    }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

    private function linkItems():Void
    {
        var jsonData = Json.parse(Assets.getText("assets/data/itemsData.json"));
        var linkData = Reflect.field(jsonData, "LinkData");
        for (item in Reflect.fields(linkData))
        {
            var parentItem = getItem(item);
            var childItems:Array<String> = Reflect.field(linkData, item);
            for (childItem in childItems)
            {
                parentItem.addObjectToDirty(getItem(childItem));
            }
        }
    }

    private function getItem(name:String):RoomItem
    {
        for (item in roomItems)
        {
            if (item.name == name)
            {
                return item;
            }
        }
        
        FlxG.log.error("Couldn't find room item " + name);

        return null;
    }
}
