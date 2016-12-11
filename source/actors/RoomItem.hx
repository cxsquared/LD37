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
    public var timeItTakes = 5;
    private var isCleaning = false;

    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X, Y);

        if (CanClean)
        {
            FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut);
            objectsToDirty = new FlxTypedGroup<RoomItem>();
        }
    }
    
    private function onMouseDown(s:FlxSprite):Void
    {
        if (isDirty && !isCleaning && !TextManager.getInstance().showingText)
        {
            Clean();
            objectsToDirty.forEach(function(object:RoomItem):Void
                    {
                        object.Dirty();
                    });
        }
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

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
        
        FlxG.watch.addQuick("Item " + name, this.x + ":" + this.y);

    }

    public function Clean():Void
    {
        isDirty = false;
        animation.play("Clean");
        FlxG.log.add("Clean called on " + name + " at " + x + ":" + y);
        TimeManager.getInstance().spendTime(timeItTakes);
    }

    public function Dirty():Void
    {
        if (!isDirty)
        {
            isDirty = true;
            animation.play("Dirty");
            FlxG.log.add("Dirty called on " + name);
            var dust = new DustCloud(x,y);
            FlxG.state.add(dust);
            dust.explode();
        }
    }

    override public function destroy():Void
    {
        objectsToDirty.clear();
        objectsToDirty.destroy();
        super.destroy();
    }

    public function addObjectToDirty(item:RoomItem):Void
    {
        objectsToDirty.add(item);
    }

    public function addTo(parent:Dynamic):Void
    {
        parent.add(this);
    }
}
