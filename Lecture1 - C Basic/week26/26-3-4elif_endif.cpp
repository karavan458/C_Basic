#include<stdio.h>
#define HIT_NUM 7

int main() {
#if HIT_NUM == 5
    printf("매크로 상수 HIT_NUM은 현재 5입니다. \n");

#elif HIT_NUM == 6
    printf("매크로 상수 HIT_NUM은 현재 6입니다. \n");

#elif HIT_NUM == 7
    printf("매크로 상수 HIT_NUM은 현재 7입니다. \n");

#else 
    printf("매크로 상수 HIT_NUM은 5, 6, 7이 아닙니다.\n");
#endif

    return 0;
}