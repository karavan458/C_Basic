#include<stdio.h>

int main() {
    char str[] = "Good Morning!";
    printf("str의 크기 = %d\n", sizeof(str));
    printf("널 문자 문자형 출력 = %c\n", str[13]);
    printf("널 문자 정수형 출력 = %d\n", str[13]);

    str[12] = '?';
    printf("변경된 문자열 출력 %s\n", str);
    return 0;
}