#include<stdio.h>

int main() {
    char str[50];
    int idx = 0;

    printf("문자열 입력 : ");
    // 문자열을 입력 받아 배열 str에 저장 
    scanf("%s", str);
    printf("입력된 문자열 : %s\n", str);

    printf("문자열 단위 출력 : ");
    while (str[idx] != '\0') {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");
    return 0;
}