#include<stdio.h>

int main() {
    int x1, y1;
    int x2, y2;
    int x ,y;
    int area;

    printf("좌표 x1, y1를 입력 : ");
    scanf("%d %d", &x1, &y1);

    printf("좌표 x2, y2를 입력 : ");
    scanf("%d %d", &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;
    area = x * y;

    printf("두 좌표가 이루는 직사각형의 넓이는 : %d 입니다.", area);

    return 0;
}