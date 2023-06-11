#include<stdio.h>

//int total = 0;  전역 변수의 목적이 값의 유지라면 static변수로 사용하자

int AddtoTotal(int num){
    static int total;
    total += num;
    return total;
}

int main() {
    int num, i;
    
    for(i = 0; i < 3; i++){
        printf("입력 %d : ", i + 1);
        scanf("%d", &num);
        printf("누적 : %d\n", AddtoTotal(num));
    }
    
    return 0;
}