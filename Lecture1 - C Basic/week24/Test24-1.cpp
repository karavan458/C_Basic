#include<stdio.h>

int main() {
    FILE* fp = fopen("Test1.txt", "wt");
    char str[20];

    if(fp == NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    fputs("#이름 : 윤성우\n", fp);
    fputs("#주민번호 : 000000-000000\n", fp);
    fputs("#전화번호 : 010-XXXX-XXXX\n", fp);
    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육\n", fp);
    fputs("#취미 : 축구\n", fp);


    fclose(fp);
    return 0;
}