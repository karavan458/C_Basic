#include<stdio.h>

int main() {
    int x, y;
    int result1, result2;

    printf("2개의 정수 입력 : ");
    scanf("%d %d", &x, &y);

    result1 = x / y;
    result2 = x % y;

    printf("입력받은 정수의 나눗셈의 몫은 : %d\n입력받은 정수의 나눗셈의 나머지는 : %d", result1, result2);
    
    return 0;
}