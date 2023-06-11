//키보드로 부터 EOF가 입력될 때까지 숫자를 입력 받아서, 입력된 숫자의 총 합을 구하는 프로그램을 작성

#include<stdio.h>

int main(){
    int num;
    int total = 0;

    while (1) {
        fputs("Data input(Ctrl + z to exit) : ", stdout);
        int result = scanf("%d", &num);

        if(result == EOF) {
            break;
        }

        total += num;
    }

    printf("총 합 : %d\n", total);
    return 0;
    
}