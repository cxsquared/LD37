package actors;

import flixel.FlxSprite;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;

class RoomItem extends FlxSprite
{
    var objectsToDirty:FlxTypedGroup<RoomItem>;

    public var isDirty(default, null):Bool = true;
    public var name = "";

    public function new(X:Int, Y:Int)
    {
        super(X, Y);

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
        animation.play("Clean");
        FlxG.log.add("Clean called on " + name + " at " + x + ":" + y);
    }

    public function Dirty():Void
    {
        isDirty = true;
        animation.play("Dirty");
        FlxG.log.add("Dirty called on " + name);
    }

    override public function destroy():Void
    {
        objectsToDirty.clear();
        objectsToDirty.destroy();
        super.destroy();
    }
}
