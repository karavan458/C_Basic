#include<stdio.h>

//if you want correct value using by call - by - value
int SquareByValue(int x) {
    return x * x;
}

void SquareByRegerence(int * p1) {
    int num = *p1;
    *p1 = num * num;
}

int main() {
    int num1 = 2;
    printf("result = %d\n", SquareByValue(num1));

    SquareByRegerence(&num1);
    printf("result = %d\n", num1);

    return 0;
}