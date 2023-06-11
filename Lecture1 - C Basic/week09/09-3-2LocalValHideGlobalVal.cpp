#include<stdio.h>

int num = 1;

int Add(int val){
    int num = 9;
    num += val;
    return num;
}

int main() {
    int num = 5;
    
    printf("num : %d\n", Add(3));   // Add함수의 지역변수 num
    printf("num : %d\n", num + 9);  // main함수의 지역변수 num
    return 0;
}