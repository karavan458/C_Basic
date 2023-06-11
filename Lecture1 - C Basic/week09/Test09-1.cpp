#include<stdio.h>

int BigOne(int x, int y, int z){
    if(x > y){
        if(x > z) {
            return x;
        }
    } 
    else if(y > z){
        return y;
    }
    else {
        return z;
    }
}


int main() {
    int num1, num2, num3;

    printf("3개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("3개중 가장 큰 수는 : %d", BigOne(num1, num2, num3));

    return 0;
}
