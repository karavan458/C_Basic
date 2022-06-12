#include<stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void OrgSymTrand(Point* ptr) {
    ptr->xpos *= -1;
    ptr->ypos *= -1;
}

void ShowPosition(Point pos) {
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main() {
    Point pos = { 7, -5};
    
    OrgSymTrand(&pos);
    ShowPosition(pos);

    OrgSymTrand(&pos);
    ShowPosition(pos);

    return 0;
}