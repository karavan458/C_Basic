//두개의 정수를 16진수로 입력 받자.
//그리고 이렇게 입력된 두수의 합의 결과를 8진수, 10진수, 16진수로 출력하는 프로그램을 작성하자

#include<stdio.h>

int main(){
    int num1, num2;

    printf("주 수를 16진수로 입력 : ");
    scanf("%x %x", &num1, &num2);

    int result = num1 + num2;

    printf("연산 결과 8진수 : %o\n", result);
    printf("연산 결과 10진수 : %d\n", result);
    printf("연산 결과 16진수 : %x\n", result);

    return 0;
    
}