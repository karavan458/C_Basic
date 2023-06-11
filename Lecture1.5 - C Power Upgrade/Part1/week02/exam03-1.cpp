//두개의 숫자를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현 
//단, if 사용금지

#include<stdio.h>

int main() {
    int x, y;

    printf("두 개의 숫자를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    printf("큰 수는 : %d\n", (x > y) ? x : y);
    return 0;
}