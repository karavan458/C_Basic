#include<stdio.h>

int main() {
    int num = 0;
    int total = 0;

    do {
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    } while(num != 0);

    printf("합계 : %d", total);
    
    return 0;
}