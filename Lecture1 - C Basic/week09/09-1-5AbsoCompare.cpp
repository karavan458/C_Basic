#include<stdio.h>

int GetAbsoValue(int x){
    if(x < 0){
        return x * (-1);
    }
    else {
        return x;
    }
}

int AbsoCompare(int num1, int num2){
    return GetAbsoValue(num1) > GetAbsoValue(num2) ? GetAbsoValue(num1) : GetAbsoValue(num2);
}

int main() {
    int num1, num2;

    printf("2개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d와 %d중 절대값이 더 큰 수는 : %d\n", num1, num2, AbsoCompare(num1, num2));
    return 0;
}