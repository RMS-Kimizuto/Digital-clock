#include "../utils/console_util.cpp"
#include "../utils/time_util.cpp"
#include "time_display.cpp"

using namespace std;

void console_graphic_clock()
{
    clearScreen();
    initNumberMap();
    while (true)
    {
        int hour = getHour();
        int minute = getMinute();
        int second = getSecond();
        //clearScreen();
        moveCursorTo(0, 0); // using double buffer
        displayTime(hour, minute, second);
        cout << endl << endl << endl << endl << endl;
        while (getSecond() == second);
    }
}

