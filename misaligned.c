#include "misaligned.h"

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMajorColors =
    sizeof(majorColor) / sizeof(majorColor[0]);
    int numberOfMinorColors =
    sizeof(minorColor) / sizeof(minorColor[0]);
    int i = 0, j = 0;
    for(i = 0; i < numberOfMajorColors; i++) {
        for(j = 0; j < numberOfMinorColors; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
   
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
