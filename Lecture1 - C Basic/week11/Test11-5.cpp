#include<stdio.h>

int main() {
    char str[10];
    int strLen = 0;
    int max = 0;

    printf("문자열 입력 : ");
    scanf("%s", str);

    while(str[strLen] != '\0'){
        strLen++;
    }
    
    for(int i = 0; i < strLen; i++) {
        if(max < str[i]) {
            max = str[i];
        }
    }

    printf("%c", max);

    return 0;
} 