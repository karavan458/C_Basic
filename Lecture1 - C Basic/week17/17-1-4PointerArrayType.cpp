#include<stdio.h>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int * ptr1 = &num1;
    int * ptr2 = &num2;
    int * ptr3 = &num3;

    int * ptr[] = {ptr1, ptr2, ptr3};
    int ** dptr = ptr;

    for(int i = 0; i < 3; i++) {
        printf("%d " , *(ptr[i]));
    }
    printf("\n");
    
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(dptr[i]));
    }
    
    return 0;
}