#include<stdio.h>

int main() {
    int num = 0;
    int total = 0;

    do {
        total += num;
        num += 2;
    } while(num <= 100);

    printf("합계 : %d", total);

    return 0;
}