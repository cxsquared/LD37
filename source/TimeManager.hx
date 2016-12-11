package;

class TimeManager
{
    private static var instance:TimeManager;
    public static function getInstance():TimeManager
    {
        if (instance == null)
        {
            instance = new TimeManager();
        }
        return instance;
    }

    private var MaxTime = 60;
    private var timeSpent = 0;

    private function new()
    {
        timeSpent = 0;
    }

    public function spendTime(time:Int):Void
    {
        timeSpent += time;
    }

    public function isTimeLeft():Bool
    {
        if (timeSpent >= MaxTime)
        {
            return true;
        }

        return false;
    }

}
