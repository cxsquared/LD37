package;

import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText.FlxTextAlign;
import flixel.group.FlxGroup;

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
    private var text:FlxText;

    private function new()
    {
        super();
        background = new FlxSprite();
        background.makeGraphic(Std.int(FlxG.width), Std.int(FlxG.height/4), FlxColor.fromRGBFloat(.25,.25,.25,.5));
        background.y = FlxG.height - FlxG.height/4;
        add(background);

        text = new FlxText(10, FlxG.height - FlxG.height/4 + 10, FlxG.width-20, "This is a test for the text", 72);
        text.alignment = FlxTextAlign.CENTER;
        add(text);
    }

}
