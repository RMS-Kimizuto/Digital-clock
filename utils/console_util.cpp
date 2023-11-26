#include <windows.h> // Include the Windows header for Windows-specific functions

using namespace std;

// Function to clear the console screen on Windows
void clearScreen() {
    system("cls");
}

// Function to move the console cursor to position (x, y)
void moveCursorTo(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}