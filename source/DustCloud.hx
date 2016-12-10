package;

import flixel.group.FlxGroup;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;

class DustCloud extends FlxGroup
{
    var whiteEmit:FlxEmitter;
    var blackEmit:FlxEmitter;

    public function new(X:Float, Y:Float)
    {
        super();

        makeParticles(X, Y);
    }

    private function makeParticles(X:Float, Y:Float):Void
    {
        whiteEmit = new FlxEmitter(X, Y);
        blackEmit = new FlxEmitter(X, Y);

        whiteEmit.makeParticles(2, 2, FlxColor.fromRGBFloat(0.75,0.75,0.75,1));
        blackEmit.makeParticles(2, 2, FlxColor.BLACK);

        add(whiteEmit);
        add(blackEmit);
    }

    public function explode():Void
    {
        whiteEmit.start();
        blackEmit.start();
    }

    override public function destroy():Void
    {
        whiteEmit.destroy();
        blackEmit.destroy();
        super.destroy();
    }
}
