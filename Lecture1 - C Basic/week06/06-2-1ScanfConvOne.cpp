#include<stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("3개의 정수 입력 : ");
    scanf("%d %o %x", &num1, &num2, &num3);

    printf("입력된 10진수 출력 : ");
    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}