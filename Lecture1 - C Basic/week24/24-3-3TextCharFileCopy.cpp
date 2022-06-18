#include<stdio.h>

int main() {
    FILE* src = fopen("data.txt", "rt");
    FILE* des = fopen("dst.txt", "wt");
    int ch;

    if(src == NULL || des == NULL){
        puts("file open failed");
        return -1;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, des);
    }

    if(feof(src) != 0) {
        puts("File copy complete");
    }
    else {
        puts("File copy failed");
    }

    fclose(src);
    fclose(des);
    return 0;

}