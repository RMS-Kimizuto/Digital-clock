//#include "clock/console_clock.cpp"
#include <iostream>
using namespace std;

#include "graphic/frame/frame.cpp"

int main()
{
    //console_graphic_clock();
    Frame f = getFrameFromNumber(TWO);
    cout << "Frame width: " << f.width << endl;
    cout << "Frame height: " << f.height << endl;
    printFrameToScreen(f);
    return 0;
}
