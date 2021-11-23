//두개의 정수를 입력 받아 최대공약수를 구해라

#include<stdio.h>

int main() {
    int x, y;
    int result = 0;

    printf("2개의 정수 입력 : ");
    scanf("%d %d", &x, &y);

    for(int i = 1; i < x; i++){
        if(x % i == 0 && y % i == 0){
            result = i;
        }
    }
    printf("두 정수의 최대 공약수는 : %d", result);
    return 0;
}