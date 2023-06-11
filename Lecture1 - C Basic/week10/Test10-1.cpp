// 10진수 정수를 입력 받아 16진수로 출력하라 

#include<stdio.h>

int main() {
    int num;

    printf("10진수 입력 : ");
    scanf("%d", &num);

    printf("16진수 변환 결과 : %#x", num);
    
    return 0;
}