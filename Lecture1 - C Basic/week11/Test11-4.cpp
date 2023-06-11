#include<stdio.h>

int main() {
    char str[10];
    int strLen = 0;
    
    printf("문자열 입력 : ");
    scanf("%s", str);

    while (str[strLen] != '\0'){
        strLen++;
    }
    
    for(int i = (strLen - 1); i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}