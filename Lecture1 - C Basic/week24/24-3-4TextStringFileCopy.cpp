#include<stdio.h>

int main() {
    FILE* src = fopen("simple.txt", "rt");
    FILE* des = fopen("des2.txt", "wt");
    char str[20];

    if(src == NULL || des == NULL) {
        puts("file open failed");
        return -1;
    }

    while(fgets(str, sizeof(str), src) != NULL) {
        fputs(str, des);
    }

    if(feof(src) != 0) {
        puts("file copy complete");
    }
    else {
        puts("file copy failed");
    }

    fclose(src);
    fclose(des);

    return 0;
}