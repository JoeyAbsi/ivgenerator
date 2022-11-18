#include <iostream>

using namespace std;

int IV[8] = {};

void IVGenerator() {
    const int min = 0;
    const int max = 15;
    for (int i = 0; i < 8; i++)
        IV[i] = rand() % (max - min + 1) + min;
    //generated bits are integers between 0 and 15, to be converted to hex
}

// add : srand(time(nullptr)); in main to generate different IVs