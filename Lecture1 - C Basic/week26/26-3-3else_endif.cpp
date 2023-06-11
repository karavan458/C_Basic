#include<stdio.h>
#define HIT_NUM 5

int main() {
#if HIT_NUM == 5
    printf("매크로 상수 HIT_NUM은 현재 5입니다. \n");

#else 
    printf("매크로 상수 HIT_NUM은 현재 5가 아닙니다.\n");
#endif

    return 0;
}