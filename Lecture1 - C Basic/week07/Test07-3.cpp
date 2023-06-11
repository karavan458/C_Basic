#include<stdio.h>

int main() {
    int num =1;
    int x = 0;

    while(num != 0) {
        printf("정수 입력 : ");
        scanf("%d", &num);
        x += num;
    }

    printf("입력된 정수의 합계는 : %d", x);

    return 0;
}