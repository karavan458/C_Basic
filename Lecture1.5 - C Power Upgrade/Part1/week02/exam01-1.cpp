//실수 2개를 입력 받아서, 두 실의 사칙 연산 결과를 출력하는 프로그램 작성

#include<stdio.h>

int main() {
    double num1, num2;

    printf("2개의 실수 입력 : ");
    scanf("%lf %lf", &num1, &num2);

    printf("실수의 합 : %f\n", num1 + num2);
    printf("실수의 차 : %f\n", num1 - num2);
    printf("실수의 곱 : %f\n", num1 * num2);
    printf("실수의 나눗셈 : %f\n", num1 / num2);
    return 0;
}