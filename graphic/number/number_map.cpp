#include "numbers.cpp"

char NUMBERS[10][5][4];

void initNumberMap()
{
    memcpy(NUMBERS[0], ZERO, sizeof(ZERO));
    memcpy(NUMBERS[1], ONE, sizeof(ZERO));
    memcpy(NUMBERS[2], TWO, sizeof(ZERO));
    memcpy(NUMBERS[3], THREE, sizeof(ZERO));
    memcpy(NUMBERS[4], FOUR, sizeof(ZERO));
    memcpy(NUMBERS[5], FIVE, sizeof(ZERO));
    memcpy(NUMBERS[6], SIX, sizeof(ZERO));
    memcpy(NUMBERS[7], SEVEN, sizeof(ZERO));
    memcpy(NUMBERS[8], EIGHT, sizeof(ZERO));
    memcpy(NUMBERS[9], NINE, sizeof(ZERO));
}

