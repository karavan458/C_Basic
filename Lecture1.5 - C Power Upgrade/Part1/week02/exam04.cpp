//정수형 데이터를 10진수로 입력 받아서 해당 데이터의 2진수 표현을 출력하는 프로그램 작성

#include<stdio.h>

int main() {
    int x;
    int i = 0;
    int bin[20];

    printf("10진수 정수 입력 : ");
    scanf("%d", &x);

    while(x > 0) {
        bin[i++] = x %2;
        x /= 2;
    }

    while(i > 0) {
        printf("%d", bin[i -1]);
        i -= 1;
    }


    return 0;
}