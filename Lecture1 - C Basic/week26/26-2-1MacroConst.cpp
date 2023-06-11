#include<stdio.h>

#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소 : 경기도 용인시\n");

int main() {
    printf("name : %s\n", NAME);
    printf("age : %d\n", AGE);
    PRINT_ADDR;
    return 0;
}