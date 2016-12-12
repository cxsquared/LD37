package actors;

import flixel.FlxG;
import AssetPaths;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.tweens.FlxEase;

class ShelfItem extends RoomItem
{
    var duster:FlxSprite;
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);

        duster = new FlxSprite(X + 28, Y + 15);
        duster.loadGraphic(AssetPaths.duster__png);
        duster.alpha = 1;        
    }

    override public function Clean():Void
    {
        super.Clean();
        this.animation.play("Dirty");
        RoomItem.isCleaning = true;
        FlxTween.tween(duster, {x: duster.x + 20, y:duster.y + this.height}, .5, {ease:FlxEase.elasticInOut, onComplete:returnDuster});
    }

    private function returnDuster(t:FlxTween):Void
    {
        this.animation.play("Clean");
        FlxTween.tween(duster, {x:this.x + 28 , y:this.y + 15}, 1, {ease:FlxEase.elasticIn, onComplete:tweenDone});
    }

    private function tweenDone(t:FlxTween):Void
    {
        RoomItem.isCleaning = false;
        duster.alpha = 0;
    }

    override public function Dirty():Void
    {
        super.Dirty();
        duster.alpha = 1;
    }

    override public function destroy():Void
    {
        duster.destroy();
        super.destroy();
    }

    override public function addTo(parent:Dynamic):Void
    {
        super.addTo(parent);
        parent.add(duster);
    } 
}
