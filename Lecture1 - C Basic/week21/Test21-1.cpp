#include<stdio.h>

int main() {
    char ch;

    ch = getchar();

    if(ch >= 65 && ch <= 90) {
        printf("입력하신 문자는 대문자입니다 소문자로 변환하면 : ");
        ch += 32;
        putchar(ch);
    }

    else if(ch >= 97 && ch <= 122) {
        printf("입력하신 문자는 소문자입니다 대문자로 변환하면 : ");
        ch -= 32;
        putchar(ch);
    }

    else {
        putchar(ch);
        printf(" 아스키코드의 문자가 아닙니다.");
    }
    return 0;
}