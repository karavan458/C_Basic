#include<stdio.h>

int num;    // 전역변수는 기본 0으로 초기화된다. 

void Add(int val){
    num += val;
}

int main() {
    printf("num : %d\n", num);
    Add(3);
    printf("num : %d\n", num);
    num++;  //전역변수 num으 값 +1
    printf("num : %d\n", num);
    return 0;
}