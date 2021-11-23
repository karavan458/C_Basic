#include<stdio.h>

int main() {
    int num;
    int num1 = 9;

    printf("원하는 구구단 : ");
    scanf("%d", &num);

    while(num1 >= 1) {
        printf("%d X %d = %d\n", num, num1, (num * num1));
        num1--;
    }

    return 0;
}