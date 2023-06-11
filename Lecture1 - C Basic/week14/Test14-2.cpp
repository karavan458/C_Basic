#include<stdio.h>

void Swap(int * ptr1, int * ptr2, int * ptr3){
    int temp = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}

int main() {
    int x = 1, y = 2, z = 3;

    Swap(&x, &y, &z);
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}