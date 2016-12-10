package actors;

import flixel.FlxSprite;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.group.FlxGroup.FlxTypedGroup;

class RoomItem extends FlxSprite
{
    var objectsToDirty:FlxTypedGroup<RoomItem>;

    public var isDirty(default, null):Bool = true;

    public function new(X:Int, Y:Int, Image:Dynamic)
    {
        super(X, Y);
        this.loadGraphic(Image);

        FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut);
        objectsToDirty = new FlxTypedGroup<RoomItem>();
    }
    
    private function onMouseDown(s:FlxSprite):Void
    {
        Clean();
        objectsToDirty.forEach(function(object:RoomItem):Void
                {
                    object.Dirty();
                });
    }
    
    private function onMouseUp(s:FlxSprite):Void
    {
    }

    private function onMouseOver(s:FlxSprite):Void
    {
    }

    private function onMouseOut(s:FlxSprite):Void
    {
    }

    public function Clean():Void
    {
        isDirty = false;
    }

    public function Dirty():Void
    {
        isDirty = true;
    }
}
