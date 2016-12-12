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
import flixel.util.FlxColor;

class PlayState extends FlxState
{

    var background:FlxSprite;
    var roomItems:FlxTypedGroup<RoomItem>;
    var endStarted:Bool = false;

	override public function create():Void
	{
		super.create();
        
        SoundManager.getInstance().playMusic();
        SoundManager.getInstance().loadSounds();
        
        background = new FlxSprite();
        background.loadGraphic(AssetPaths.room__png);
        add(background);

        addItems();
        linkItems();
        
        TimeManager.getInstance().resetTime();

        FullScreenImageManager.reset();
        add(FullScreenImageManager.getInstance());

        TextManager.reset();
        add(TextManager.getInstance());

        TextManager.getInstance().showText(TextLineManager.getInstance().getLine("wifeStart"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
        TextManager.getInstance().showText(TextLineManager.getInstance().getLine("playerStart"), 5);
	}

    private function addItems():Void
    {
        roomItems = ActorFactory.getInstance().parseItems("assets/data/itemsData.json");
        for (item in roomItems)
        {
            item.addTo(this);
        }
    }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

        FlxG.watch.addQuick("Time Left", TimeManager.getInstance().getTimeLeft());

        if (isWholeRoomClean() && !RoomItem.isCleaning && !FullScreenImageManager.getInstance().showingImage)
        {
            if (endStarted && !TextManager.getInstance().showingText)
            {
                FlxG.switchState(new MenuState());
            }
            else if (!endStarted)
            {
                if (TimeManager.getInstance().getTimeLeft() > 10)
                {
                     TextManager.getInstance().showText(TextLineManager.getInstance().getLine("roomCleanedGood"), 5);
                }
                else
                {
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("roomCleaned"), 5);
                }
                TextManager.getInstance().showText(TextLineManager.getInstance().getLine("roomCleanedWife00"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
                TextManager.getInstance().showText(TextLineManager.getInstance().getLine("roomCleanedWife01"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
            }
            endStarted = true;
        }
        else if (!TimeManager.getInstance().isTimeLeft()  && !RoomItem.isCleaning && !FullScreenImageManager.getInstance().showingImage)
        {
            if (endStarted && !TextManager.getInstance().showingText)
            {
                FlxG.switchState(new QuoteScreen());
            }
            else if (!endStarted)
            {
                if (!getItem("Tie").isDirty && !getItem("Book").isDirty) // put secret stuff here
                {
                    SoundManager.getInstance().stopMusic();
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeupSecret00"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeupSecret01"), 5);
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeupSecret02"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeupSecret03"), 5);
                    
                }
                else
                {
                    SoundManager.getInstance().playHit();
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeup00"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeup01"), 5);
                    TextManager.getInstance().showText(TextLineManager.getInstance().getLine("timeup02"), 7, FlxColor.fromString('0xFFdd8dc1'), true);
                }
            }

            endStarted = true;
        }
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

    public function getItem(name:String):RoomItem
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

    private function isWholeRoomClean():Bool
    {   
        for (item in roomItems)
        {
            if (item.isDirty && (item.name != "Tie" && item.name != "Book"))
            {
                return false;
            }
        }

        return true;

    }
}
