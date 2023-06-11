//세개의 숫자를 입력 받아서 그중 큰 수를 출력하는 프로그램을 구현하라 
//단 if문 사용금지 

#include<stdio.h>

int main() {
    int x, y, z;
    int max;

    printf("세 개의 숫자 입력 : ");
    scanf("%d %d %d", &x, &y, &z);

    max = x > y ? (x > z ? x : z) : (y > z ? y : z);

    printf("큰 수는 : %d\n", max);
    return 0;
}