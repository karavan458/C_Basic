//원의 반지름 정보를 받아서, 원의 넓이를 계산해 출력하는 프로그램을 작성하라

#include<stdio.h>

int main() {
    double num1;
    double result = 0.0;

    printf("원의 반지름 입력 : ");
    scanf("%lf", &num1);

    result = num1 * num1 * 3.14;

    printf("원의 넓이는 : %f\n", result);
    
    return 0;
}