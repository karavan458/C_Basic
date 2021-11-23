#include<stdio.h>

int main() {
    int num1, num2;
    int result;

    printf("정수 2개를 입력 : ");
    scanf("%d %d", &num1, &num2);

    for(result = 0; num1 <= num2; num1++){
        result += num1; 
    }

    printf("합계 : %d", result);
    return 0;
}