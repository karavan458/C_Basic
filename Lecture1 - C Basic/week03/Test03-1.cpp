#include<stdio.h>

int main() { 
    int num1, num2;

    printf("2개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d", num1, num2, num1 * num2);
    return 0;
}