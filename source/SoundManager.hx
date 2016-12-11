package;

import flixel.FlxG;

class SoundManager
{
    private static var instance:SoundManager;

    public static function getInstance():SoundManager
    {
        if (instance == null)
        {
            instance = new SoundManager();
        }
        return instance;
    }

    private function new()
    {
    }

    public function playMusic():Void
    {
        if (FlxG.sound.music == null)
        {
            FlxG.sound.playMusic(AssetPaths.LD37Room__mp3, 0, true);
        }

        FlxG.sound.music.fadeIn(1, 0.5);
    }

    public function stopMusic():Void
    {
        FlxG.sound.music.fadeOut(1);
    }
}
