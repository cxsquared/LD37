package actors;

import flixel.FlxSprite;
import flixel.FlxG;
import AssetPaths;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class TrashcanItem extends RoomItem
{
    var trashbag:FlxSprite;
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);

        trashbag = new FlxSprite(407,1161);
        trashbag.loadGraphic(AssetPaths.trash__png);
        trashbag.alpha = 0;        
    }

    override public function Clean():Void
    {
        super.Clean();
        trashbag.alpha = 1;
        trashbag.x = 391;
        trashbag.y = 954;
        FlxTween.tween(trashbag, {y:trashbag.y - trashbag.width}, .5, {ease:FlxEase.elasticInOut, onComplete:trashOut});
        //FlxG.log.add("trashbag at " + trashbag.x + " " + trashbag.y);
    }

    private function trashOut(t:FlxTween):Void
    {
        FlxTween.tween(trashbag, {x:trashbag.x - 1000}, 1, {ease:FlxEase.elasticInOut, onComplete:trashDone});
    }

    private function trashDone(t:FlxTween):Void
    {
        trashbag.alpha = 0;
    }

    override public function Dirty():Void
    {
        super.Dirty();
        trashbag.alpha = 0;
        //FlxG.log.add("trashbag at " + trashbag.x + " " + trashbag.y);
    }

    override public function destroy():Void
    {
        trashbag.destroy();
        super.destroy();
    }

    override public function addTo(parent:Dynamic):Void
    {
        parent.add(trashbag);
        super.addTo(parent);
    }
}
