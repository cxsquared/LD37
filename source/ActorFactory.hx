package;

import actors.RoomItem;
import haxe.Json;
import openfl.Assets;
import flixel.group.FlxGroup.FlxTypedGroup;

class ActorFactory
{
    private static var instance:ActorFactory;

    public static function getInstance():ActorFactory
    {
        if (instance == null)
        {
            instance = new ActorFactory();
        }

        return instance;
    }

    var roomItemClasses:Map<String, Class<Dynamic>>;

    private function new()
    {
        CreateRoomItemMaps();
    }

    private function CreateRoomItemMaps():Void
    {
        roomItemClasses = new Map<String, Class<Dynamic>>();
        roomItemClasses.set("RoomItem", RoomItem);
    }

    public function parseItems(ItemsDataPath:String):FlxTypedGroup<RoomItem>
    {
        var allItems = new FlxTypedGroup<RoomItem>();
        var jsData = Json.parse(Assets.getText(ItemsDataPath));
        var allItemData:Array<Dynamic> = Reflect.field(jsData, "items");
        for (itemData in allItemData)
        {
            allItems.add(parseItem(itemData));
        }

        return allItems;
    }

    public function parseItem(itemData:Dynamic):RoomItem
    {
        var x = Std.parseFloat(Reflect.field(itemData, "X"));
        var y = Std.parseFloat(Reflect.field(itemData, "Y"));
        var newItem:RoomItem = Type.createInstance(roomItemClasses[Reflect.field(itemData, "class")], [x, y]);
        newItem.name = Reflect.field(itemData, "name");
        
        var height:Int = Reflect.field(itemData, "height");
        var width:Int = Reflect.field(itemData, "width");
        
        if (height < 0 || width < 0)
        {
            newItem.loadGraphic(Std.string(Reflect.field(itemData, "image")));
        }
        else
        {
            newItem.loadGraphic(Std.string(Reflect.field(itemData, "image")), true, width, height); 
        }

        newItem.animation.add("Clean", Reflect.field(itemData, "cleanFrames"), 12, false);
        newItem.animation.add("Dirty", Reflect.field(itemData, "dirtyFrames"), 12, false);
        newItem.animation.play("Dirty");
        return newItem;
    }
}
