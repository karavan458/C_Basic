#include<stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2) {
    Point temp = {0, 0};
    temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

void PrintPoint(Point pos) {
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main() {
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    SwapPoint(&pos1, &pos2);
    PrintPoint(pos1);
    PrintPoint(pos2);

    return 0;
}