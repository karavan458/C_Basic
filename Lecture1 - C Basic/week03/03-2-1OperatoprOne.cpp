#include<stdio.h>

int main() {
    int num1 = 9, num2 = 2;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d X %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d(나눗셈의 몫)\n", num1, num2, num1 / num2);
    printf("%d / %d = %d(나눗셈의 나머지)\n", num1 ,num2 , num1 % num2); 
    return 0;
}