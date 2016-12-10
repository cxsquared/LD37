package actors;

import flixel.FlxSprite;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.group.FlxGroup.FlxTypedGroup;

class RoomItem extends FlxSprite
{

    var objectsToDirty:FlxTypedGroup<FlxSprite>;

    public function new(X:Int, Y:Int, Image:Dynamic)
    {
        super(X, Y);
        this.loadGraphic(Image);

        FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut);
    }
    
    private function onMouseDown(s:FlxSprite):Void
    {
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
}
