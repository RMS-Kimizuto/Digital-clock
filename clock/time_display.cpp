#include "../graphic/number/number_map.cpp"
#include "../graphic/frame/frame_process.cpp"

#include <ctime>
#include <iostream>

using namespace std;

// hour: in range 0 to 23
// minute: in range 0 to 59
// format HH : mm 

void addTimeValueToFrame(int t, char frame[][1000])
{   
    int t1 = t % 10;
    int t10 = t / 10;
    catNumberToFrame(frame, NUMBERS[t10]);
    addSpaceToEndOfFrame(frame);
    catNumberToFrame(frame, NUMBERS[t1]);
}

void displayTime(int hour, int minute, int second)
{
    char frame[5][1000];
    initFrame(frame);
    addTimeValueToFrame(hour, frame);
    catNumberToFrame(frame, DDOT);
    addTimeValueToFrame(minute, frame);
    catNumberToFrame(frame, DDOT);
    addTimeValueToFrame(second, frame);
    printFrameToScreen(frame);
}

