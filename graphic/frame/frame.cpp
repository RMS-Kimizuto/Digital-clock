#include "../number/numbers.cpp"

struct Frame
{
    int height;
    int width;
    char **values;
};

void initFrameSize(Frame &f)
{
    // Allocate 2D array with dynamic size (height, width)
    f.values = new char*[f.height];
    for (int i=0; i<f.height; i++) 
        f.values[i] = new char[f.width];
}

void initFrameValue(Frame &f)
{
    // set init value 
    for (int i=0; i<f.height; i++) 
    for (int j=0; j<f.width; j++) 
        f.values[i][j] = SOLID_BOX;
}

void printFrameToScreen(Frame f)
{
    for (int i=0; i<f.height; i++)
    {
        for (int j=0; j<f.width; j++)
            cout << f.values[i][j];
        cout << endl;
    }
}

Frame getFrame(int width, int height)
{
    Frame f;
    f.width = width;
    f.height = height;
    initFrameSize(f);
    initFrameValue(f);
    return f;
}

Frame getFrameFromNumber(const char number[5][4])
{
    Frame f = getFrame(4, 5);
    for (int i=0; i<f.height; i++)
        memcpy(f.values[i], number[i], sizeof(char)*f.width);
    return f;
}
