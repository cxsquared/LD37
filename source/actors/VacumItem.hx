package actors;

import flixel.FlxSprite;
import AssetPaths;
import flixel.FlxG;

class VacumItem extends RoomItem
{
    var dirtTrail:FlxSprite;
    public function new(X:Int, Y:Int)
    {
        super(X,Y);

        dirtTrail = new FlxSprite(407,1161);
        dirtTrail.loadGraphic(AssetPaths.trail__png);
        FlxG.state.add(dirtTrail);
    }

    override public function Clean():Void
    {
        super.Clean();
        dirtTrail.alpha = 0;
        //FlxG.log.add("DirtTrail at " + dirtTrail.x + " " + dirtTrail.y);
    }

    override public function Dirty():Void
    {
        super.Dirty();
        dirtTrail.alpha = 1;
        //FlxG.log.add("DirtTrail at " + dirtTrail.x + " " + dirtTrail.y);
    }

    override public function destroy():Void
    {
        dirtTrail.destroy();
        super.destroy();
    }
}
