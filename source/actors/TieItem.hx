package actors;

import flixel.FlxG;
import FullScreenImageManager;

class TieItem extends RoomItem
{
    public function new(X:Int, Y:Int, CanClean:Bool=true)
    {
        super(X,Y,CanClean);
    }

    override public function Clean():Void
    {
        FullScreenImageManager.getInstance().showTie();
        super.Clean();
    }
}
