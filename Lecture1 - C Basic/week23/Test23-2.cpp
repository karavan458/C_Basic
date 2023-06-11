#include<stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct ract {
    Point p1;
    Point p2;
} Ract;

void CalcArea(Ract r) {
    printf("Area : %d\n", (r.p1.xpos - r.p2.xpos) * (r.p1.ypos - r.p2.ypos));
}

int main() {
    Ract r1 = {{0, 0}, {2, 2}};
    CalcArea(r1);
    return 0;
}