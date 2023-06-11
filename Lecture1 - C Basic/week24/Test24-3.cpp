#include<stdio.h>

long FileSize(FILE* fp) {
    long fileSize;
    long fpos;

    fpos = ftell(fp);
    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);

    return fileSize;
}

int main() {
    char str[20];
    FILE* fp = fopen("Test14.txt", "rt");
    fgets(str, 20, fp);
    fputs(str, stdout);
    printf("file size : %ld\n", FileSize(fp));

    fclose(fp);
    return 0;
}