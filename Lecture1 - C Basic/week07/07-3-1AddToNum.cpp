#include<stdio.h>

int main() {
    int total = 0;
    int i, num;

    printf("0부터 num까지의 덧셈 num : ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        total += i;
    }

    printf("합계 = %d", total);
    return 0;
}