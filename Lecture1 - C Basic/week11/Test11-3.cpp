#include<stdio.h>

int main() {
    char str[10];
    int strLen = 0;

    printf("문자열 입력 : ");
    scanf("%s", str);
    
    while(str[strLen] != '\0') {
        strLen++;
    }

    printf("String = %s, String Length = %d", str, strLen);
    return 0;

}