#include<stdio.h>

typedef struct {
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union {
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main() {
    RDBuf buf;
    
    printf("정수 입력 : ");
    scanf("%d", &buf.iBuf);

    printf("상위 2바이트 : %u\n", buf.sBuf.upper);
    printf("하위 2바이트 : %u\n", buf.sBuf.lower);

    printf("상위 1바이트 : %c\n", buf.bBuf[0]);
    printf("하위 1바이트 : %c\n", buf.bBuf[3]);

    printf("%p %p", &buf.bBuf[0], &buf.bBuf[1]);

    return 0;
}