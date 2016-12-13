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

        dirtTrail = new FlxSprite(340,819);
        dirtTrail.loadGraphic(AssetPaths.trail__png);
        FlxG.state.add(dirtTrail);
    }

    override public function Clean():Void
    {
        super.Clean();
        FlxTween.tween(this, {x: this.x - 5, y: this.y+20}, .5, {ease:FlxEase.elasticInOut, onComplete:VacumCleanFloor});
        RoomItem.isCleaning = true;
        //FlxG.log.add("DirtTrail at " + dirtTrail.x + " " + dirtTrail.y);
        // 1185:635
        //391:1082
    }

    private function VacumCleanFloor(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:183, y:759}, 1, {ease:FlxEase.elasticInOut, onComplete:VacumTweenBackwards});
    }

    private function VacumTweenBackwards(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:920, y:340}, 1, {ease:FlxEase.elasticInOut, onComplete:VacumLastTween});
        FlxTween.tween(dirtTrail, {alpha:0}, 1);
    }

    private function VacumLastTween(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:925, y: 320}, .5, {ease:FlxEase.elasticInOut, onComplete:VacumTweenDone});
        
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
