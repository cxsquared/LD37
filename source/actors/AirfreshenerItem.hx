package actors;

import flixel.FlxG;
import AssetPaths;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import TextLineManager;
import TextManager;

class AirfreshenerItem extends RoomItem
{
    var stink:FlxSprite;
    var timesCleaned = 0;
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);

        stink = new FlxSprite(373,933);
        stink.loadGraphic(AssetPaths.stinkLines__png);
        stink.alpha = 1;        
    }

    override public function Clean():Void
    {
        timesCleaned++;
        if (timesCleaned > 3)
        {
            TextManager.getInstance().showText(TextLineManager.getInstance().getLine("airfreshenerTooClean"));      
        }
        super.Clean();
        RoomItem.isCleaning = true;
        FlxTween.tween(stink, {alpha:0}, 2);
        FlxG.log.add("stink at " + stink.x + " " + stink.y);
        FlxTween.tween(this, {x: 750, y:650}, 1, {ease:FlxEase.elasticInOut, onComplete:returnAirfreshener});
    }

    private function returnAirfreshener(t:FlxTween):Void
    {
        FlxTween.tween(this, {x:470 , y:900}, 1, {ease:FlxEase.elasticIn, onComplete:tweenDone});
    }

    private function tweenDone(t:FlxTween):Void
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
        timesCleaned = 0;

        FlxTween.tween(stink, {alpha:1}, .25);
        FlxG.log.add("stink at " + stink.x + " " + stink.y);
    }

    override public function destroy():Void
    {
        stink.destroy();
        super.destroy();
    }

    override public function addTo(parent:Dynamic):Void
    {
        super.addTo(parent);
        parent.add(stink);
    }

}
