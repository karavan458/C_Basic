#include<stdio.h>
#define SQUARE(X) X * X

int main() {
    int num = 20;

    printf("square of num : %d\n", SQUARE(num));
    printf("square of -5 : %d\n", SQUARE(-5));
    printf("square of 3.5 : %g \n", SQUARE(3.5));

    printf("square of 3 + 2 : %d\n", SQUARE(3 + 2));

    return 0;
}