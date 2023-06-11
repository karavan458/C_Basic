#include<stdio.h>

int main() {
    int num;
    int num1 = 0;
    int total = 0;
    double avg;

    printf("입력할 정수의 개수 입력 : ");
    scanf("%d", &num);

    while(num1 != num){
        int i;
        printf("정수 입력 : ");
        scanf("%d", &i);
        total += i;
        num1++;
    }

    avg = (double)total / num;
    printf("입력 된 정수의 평균은 : %f", avg);

    return 0;
}