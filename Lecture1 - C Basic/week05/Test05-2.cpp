#include<stdio.h>

int main() {
    double x, y;

    printf("2개의 실수를 입력 : ");
    scanf("%lf %lf", &x, &y);

    printf("%f + %f = %f\n", x, y, (x + y));
    printf("%f - %f = %f\n", x, y, (x - y));
    printf("%f * %f = %f\n", x, y, (x * y));
    printf("%f / %f = %f\n", x, y, (x / y));

    return 0;
}