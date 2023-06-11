#include<stdio.h>

int main() {
    int num1, num2, num3;
    int result;

    printf("3개의 정수 입력 :");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num2);
    printf("연산결과 : %d", result);
    
    return 0;
}
