#include<stdio.h>

int main() {
    int num;
    int result = 1;

    printf("x!의 x값 입력 : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        result *= i;
    }

    printf("%d!의 값은 : %d", num, result);
    return 0;
}