#include<stdio.h>

int main() {
    int cur = 2;
    int is = 0;

    while(cur < 10){    // 2단 부터 9간까지 반복
        is = 1;         // 새로운 단의 시작을 위해
        
        while(is < 10){
            printf("%d X %d = %d\n", cur, is, cur * is);
            is++;
        }
        printf("\n");
        cur++;  // 다음 단으로 넘어가기 위한 증가
    }

    return 0;
}