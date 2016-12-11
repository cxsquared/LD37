package;

import haxe.Json;
import openfl.Assets;
import flixel.FlxG;

class TextLineManager
{
    private static var instance;
    public static function getInstance():TextLineManager
    {
        if (instance == null)
        {
            instance = new TextLineManager();
        }

        return instance;
    }

    private var lineData:Dynamic;

    private function new()
    {
        var jsonData = Json.parse(Assets.getText("assets/data/linedata.json"));
        lineData = Reflect.field(jsonData, "lines");
    }

    public function getLine(id:String):String
    {
        if (Reflect.hasField(lineData, id))
        {
            return Reflect.field(lineData, id);
        }

        FlxG.log.error("Line " + id + " couldn't be found.");

        return null;
    }
}
