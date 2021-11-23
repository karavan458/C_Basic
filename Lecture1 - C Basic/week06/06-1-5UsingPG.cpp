#include<stdio.h>

int main() {
    double d1 = 1.23E-3;    //0.00123
    double d2 = 1.23E-4;    //0.000123
    double d3 = 1.23E-5;    //0.0000123
    double d4 = 1.23E-6;    //0.00000123

    printf("%g \n", d1);    //%f스타일 출력
    printf("%g \n", d2);    //%f스타일 출력
    printf("%g \n", d3);    //%g스타일 출력
    printf("%g \n", d4);    //%g스타일 출력

    return 0;
}