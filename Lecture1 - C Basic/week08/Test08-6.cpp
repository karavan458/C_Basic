#include<stdio.h>

int main() {
    int num;

    printf("0 ~ 30까지 1개의 정수 입력 : ");
    scanf("%d", &num);

    switch(num / 10){
    case 0:
        printf("0이상 10 미만");
        break;
    
    case 1:
        printf("10이상 20미만");
        break;

    case 2:
        printf("20이상 30미만");
        break;
    
    default:
        printf("30이상");
    }
    return 0;
}