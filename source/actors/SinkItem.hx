package actors;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import AssetPaths;

class SinkItem extends RoomItem
{
    var dishes:FlxSprite;
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);

        dishes = new FlxSprite(343,933);
        dishes.loadGraphic(AssetPaths.dishes__png);
        dishes.alpha = 1;        
    }

    override public function Clean():Void
    {
        super.Clean();
        FlxTween.tween(dishes, {alpha:0}, .25);
        FlxG.log.add("dishes at " + dishes.x + " " + dishes.y);
    }

    override public function Dirty():Void
    {
        super.Dirty();

        FlxTween.tween(dishes, {alpha:1}, .25);
        FlxG.log.add("dishes at " + dishes.x + " " + dishes.y);
    }

    override public function destroy():Void
    {
        dishes.destroy();
        super.destroy();
    }

    override public function addTo(parent:Dynamic):Void
    {
        super.addTo(parent);
        parent.add(dishes);
    }
}
