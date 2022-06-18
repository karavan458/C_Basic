#include<stdio.h>

int main() {
    FILE* src = fopen("src.bin", "rt");
    FILE* des = fopen("dst.bin", "wt");
    char buf[20];
    int readCnt;

    if(src == NULL || des == NULL) {
        puts("file open failed");
        return -1;
    }

    while(1) {
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        if(readCnt < sizeof(buf)) {
            fwrite((void*)buf, 1, readCnt, des);
            puts("file copy complete");
            break;
        }
        else {
            puts("file copy failed");
        }

        break;
    }
    fclose(src);
    fclose(des);

    return 0;
}