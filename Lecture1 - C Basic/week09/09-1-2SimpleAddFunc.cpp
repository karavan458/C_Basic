#include<stdio.h>

int Add(int num1, int num2){
    return num1 + num2;
}

int main() {
    int result;
    result = Add(3, 4);

    printf("덧셈 결과 : %d\n", result);

    result = Add(7, 8);

    printf("덧셈 결과 : %d\n", result);

    return 0;
}