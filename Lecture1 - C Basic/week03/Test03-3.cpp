#include<stdio.h>

int main() {
    int num1;

    printf("하나의 정수 입력 : ");
    scanf("%d", &num1);

    printf("입력한 정수의 제곱 결과 : %d", num1 * num1);
    
    return 0;
}