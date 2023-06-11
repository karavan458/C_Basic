#include<stdio.h>

int main() {
    int num = 1;

    if(num == 1){
        int num = 7;
        num += 10;
        printf("if문 내에 지역변수 num : %d\n", num);
    }

    printf("main함수 내에 지역변수 num : %d\n", num);
    return 0;
}