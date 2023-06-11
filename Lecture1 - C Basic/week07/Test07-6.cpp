#include<stdio.h>

int main() {
    int num = 0;
    int num1;
    int total = 0;

    while(num < 5){
        printf("정수 입력 : ");
        scanf("%d", &num1);
        total += num1;
        num++;

        while(num1 <= 0) {
            printf("다시 입력해 주세요\n");
            num1 = 1;
            num--;
        }
        num1 = 0;
    }
    printf("입력받은 정수의 합은 : %d", total);

    return 0;
}