#include<stdio.h>

void SwapIntPtr(int * p1, int * p2){
    int * temp;
    p1 = p2;
    p2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int * ptr1 = &num1;
    int * ptr2 = &num2;

    printf("%d, %d \n", *ptr1, *ptr2);

    SwapIntPtr(ptr1, ptr2);
    printf("%d, %d \n", *ptr1, *ptr2);

    return 0;
}