package;

import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxSound;
import flixel.FlxObject;

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
    private var sfxSounds:Map<String, FlxSound>;
    private var centerSound:FlxObject;

    private function new()
    {
        loadSounds();
    }

    public function loadSounds():Void
    {
        loadVoices();
        loadSfx();

        centerSound = new FlxObject(FlxG.width/2, FlxG.height/2);
    }

    private function loadVoices():Void
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

    private function loadSfx():Void
    {
        sfxSounds = new Map<String, FlxSound>();

        sfxSounds.set("CounterSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.counterSfx__wav)), FlxSound));
        sfxSounds.set("FebreezeSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.febreezeSfx__wav)), FlxSound));
        sfxSounds.set("Litterbox", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.litterboxSfx__wav)), FlxSound));
        sfxSounds.set("MilkSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.milkSfx__wav)), FlxSound));
        sfxSounds.set("ShelfSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.shelfSfx__wav)), FlxSound));
        sfxSounds.set("SinkSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.sinkSfx__wav)), FlxSound));
        sfxSounds.set("TableSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.tableSfx__wav)), FlxSound));
        sfxSounds.set("TrashSfx", cast(FlxG.state.add(new FlxSound().loadEmbedded(AssetPaths.trashSfx__wav)), FlxSound));
    }

    public function playMusic():Void
    {
        if (FlxG.sound.music == null)
        {
            //FlxG.sound.playMusic(AssetPaths.LD37Room__mp3, 0, true);
        }

        //FlxG.sound.music.fadeIn(1, 0);
    }

    public function stopMusic():Void
    {
        //FlxG.sound.music.fadeOut(1);
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

    public function playSfx(sfx:String, ?Volume:Float=1, ?X:Float=0, ?Y:Float=0):Void
    {
        if (sfxSounds.exists(sfx))
        {
            var sound = sfxSounds.get(sfx);
            sound.proximity(X,Y,centerSound,FlxG.width,true);
            sound.play();
        }
        else
        {
            FlxG.log.error("SFX " + sfx + " isn't loaded.");
        }
    }
}
