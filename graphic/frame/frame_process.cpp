#include <iostream>
using namespace std;

void catNumberToFrame(char frame[][1000], const char num[][4])
{
    for (int i=0; i<5; i++)
        strcat(frame[i], num[i]);
}

void initFrame(char frame[5][1000])
{
    for (int i=0; i<5; i++)
        frame[i][0] = END_STR;
}

void addSpaceToEndOfFrame(char frame[5][1000])
{
    for (int i=0; i<5; i++)
        strcat(frame[i], " ");
}

void printFrameToScreen(char frame[5][1000])
{
    for (int i=0; i<5; i++)
    {
        int len = strlen(frame[i]);
        for (int j=0; j<len; j++)
            cout << frame[i][j] << frame[i][j];
        cout << endl;
    }    
}

void printFrameToScreen(char frame[50][10])
{
    for (int i=0; i<5; i++)
    {
        int len = strlen(frame[i]);
        for (int j=0; j<len; j++)
            cout << frame[i][j] << frame[i][j];
        cout << endl;
    }    
}


/*void printNumber(int n)
{
    char frame[5][1000];
    initFrame(frame);
    int k = 1;
    while (k * 10 <= n) k *= 10;
    while (n != 0 || k != 0)
    {
        int d = n / k;
        n = n % k;
        k /= 10;
        catNumberToFrame(frame, NUMBERS[d]);
        addSpaceToEndOfFrame(frame);
    }
    printFrameToScreen(frame);
}*/

