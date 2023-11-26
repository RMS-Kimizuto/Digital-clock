#include <windows.h> // Include the Windows header for Windows-specific functions

using namespace std;

// Function to get the current hour (0 to 23) on Windows
int getHour() {
    SYSTEMTIME time;
    GetLocalTime(&time);
    return time.wHour;
}

// Function to get the current minute (0 to 59) on Windows
int getMinute() {
    SYSTEMTIME time;
    GetLocalTime(&time);
    return time.wMinute;
}

// Function to get the current second (0 to 59) on Windows
int getSecond() {
    SYSTEMTIME time;
    GetLocalTime(&time);
    return time.wSecond;
}