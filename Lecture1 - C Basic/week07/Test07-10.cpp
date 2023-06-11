#include<stdio.h>

int main() {
    int num1 = 2;
    int num2 = 1;

    do{
        num2 = 1;
        do{
            printf("%d X %d = %d\n", num1, num2, num1 * num2);
            num2++;
        } while(num2 < 10);
        num1++;
        printf("\n");
    }while(num1 < 10);

    return 0;
}