package;

import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxSound;

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

    private var wifeSounds:FlxTypedGroup<FlxSound>;
    private var playerSounds:FlxTypedGroup<FlxSound>;
    private var voiceSxfLevel = .25;

    private function new()
    {
        loadSounds();
    }

    public function loadSounds():Void
    {
        wifeSounds = new FlxTypedGroup<FlxSound>();
        playerSounds = new FlxTypedGroup<FlxSound>();

        for(i in 0...6)
        {
            var wifeSound = new FlxSound();
            wifeSound.loadEmbedded("assets/sounds/wife/wife0" + i + ".wav");
            wifeSounds.add(wifeSound);

            var playerSound = new FlxSound();
            playerSound.loadEmbedded("assets/sounds/player/player0" + i + ".wav");
            playerSounds.add(playerSound);
        }

        FlxG.state.add(wifeSounds);
        FlxG.state.add(playerSounds);
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

    public function playWifeNote():Void
    {
        if (wifeSounds == null)
        {
            loadSounds();
        }

        var wifeSound:FlxSound = wifeSounds.getRandom();
        wifeSound.volume = voiceSxfLevel;
        wifeSound.play(true);
    }

    public function playPlayerNote():Void
    {
        if (playerSounds == null)
        {
            loadSounds();
        }

        var playerSound:FlxSound = playerSounds.getRandom();
        playerSound.volume = voiceSxfLevel;
        playerSound.play(true);
    }

    public function getWifeSounds():Array<FlxSound>
    {
        if (wifeSounds == null)
        {
            loadSounds();
        }

        var allSounds:Array<FlxSound> = wifeSounds.members;

        return allSounds;
    }

    public function getPlayerSounds():Array<FlxSound>
    {
        if (playerSounds == null)
        {
            loadSounds();
        }

        var allSounds:Array<FlxSound> = playerSounds.members;

        return allSounds;
    }

    public function playHit():Void
    {
        FlxG.sound.music.stop();
        FlxG.sound.play(AssetPaths.MusicHit__wav);
    }
}
