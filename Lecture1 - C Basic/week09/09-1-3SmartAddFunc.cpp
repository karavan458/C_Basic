#include<stdio.h>

int Add(int x, int y){
    return x + y;
}

void ShowAddResult(int x) {
    printf("덧셈결과 출력 : %d\n", x);
}

int ReadNum() {
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg() {
    printf("2개의 정수를 입력하면 덧셈결과가 출력됩니다.\n");
    printf("2개의 정수 입력 : \n");
}

int main() {
    int result, num1, num2;
    
    HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();

    result = Add(num1, num2);
    ShowAddResult(result);

    return 0;
}