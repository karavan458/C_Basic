//정수 2개를 입력 받아 정수 2개 사이의 구구단 출력

#include<stdio.h>

int main() {
    int x, y;
    int num = 1;

    printf("정수 2개 입력 : ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        for(int i = y; i <= x; i++){
            for(num = 1; num <= 9; num++){
                printf("%d * %d = %d\n", i, num, i * num);
            }
            num = 1;
            printf("\n");
        }
    }

    else {
        for(int i = x; i <= y; i++){
            for(num = 1; num <= 9; num++){
                printf("%d * %d = %d\n", i, num, i * num);
            }
            num = 1;
            printf("\n");
        }  
    }     
    return 0;
}