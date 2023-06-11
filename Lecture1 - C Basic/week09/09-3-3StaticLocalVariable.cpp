#include<stdio.h>

void SimpleFunc(){
    static int num1 = 0;    // 초기화 하지 않으면 0으로 초기화 
    int num2 = 0;           // 초기화 하지 않으면 가비지 값
    
    num1++, num2++;
    printf("Static : %d, local : %d\n", num1, num2);
}

int main() {
    int i;
    
    for(i = 0; i < 3; i++){
        SimpleFunc();
    }
    
    return 0;
}