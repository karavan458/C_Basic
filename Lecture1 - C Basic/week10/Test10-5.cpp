//10개의 소수를 구하는 프로그램 작성

#include<stdio.h>

int main() {
    int x; 
    int y;
    int num;

    printf("2 ~ n까지의 소수 출력 n = ");
    scanf("%d", &num);

    for( x= 2; x <= num; x++){
        for(y = 2; y <= num; y++){
            if(x % y == 0){
                break;
            }
        }
        if(x == y){
            printf("%d ", x);
        }
    }
    
    return 0;
}