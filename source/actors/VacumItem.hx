package actors;

import flixel.FlxSprite;
import AssetPaths;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class VacumItem extends RoomItem
{
    var dirtTrail:FlxSprite;
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);

        dirtTrail = new FlxSprite(407,1161);
        dirtTrail.loadGraphic(AssetPaths.trail__png);
        FlxG.state.add(dirtTrail);
    }

    override public function Clean():Void
    {
        super.Clean();
        FlxTween.tween(this, {x: 1185, y: 635}, .5, {ease:FlxEase.elasticInOut, onComplete:VacumCleanFloor});
        RoomItem.isCleaning = true;
        //FlxG.log.add("DirtTrail at " + dirtTrail.x + " " + dirtTrail.y);
        // 1185:635
        //391:1082
    }

    private function VacumCleanFloor(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:451, y:1102}, 1, {ease:FlxEase.elasticInOut, onComplete:VacumTweenBackwards});
    }

    private function VacumTweenBackwards(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:1185, y:635}, 1, {ease:FlxEase.elasticInOut, onComplete:VacumLastTween});
        FlxTween.tween(dirtTrail, {alpha:0}, 1);
    }

    private function VacumLastTween(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:954, y: 486}, .5, {ease:FlxEase.elasticInOut, onComplete:VacumTweenDone});
        
    }

    private function VacumTweenDone(t:FlxTween):Void
    {
        RoomItem.isCleaning = false;
    }

    override private function alreadyCleaned():Void
    {
        Clean();
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
