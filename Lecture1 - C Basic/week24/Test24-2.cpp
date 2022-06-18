#include<stdio.h>

int main() {
    char str[100];
    int ch;
    FILE* fp = fopen("Test1.txt", "rt");

    if(fp == NULL){
        puts("file open failed");
        return -1;
    }


    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fclose(fp);
    return 0;
}