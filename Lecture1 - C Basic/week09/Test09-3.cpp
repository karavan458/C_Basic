#include<stdio.h>

void Pi(int x){
    int y = 0;
    int t1 = 0, t2 = 1;
    int Term;
    for(int i = 0; i < x; i++) {
        printf("%d, ", t1);
        Term = t1 + t2;
        t1 = t2;
        t2 = Term;
    }
}

int main() {
    int x;

    printf("피보나치 수열 개수 입력 : ");
    scanf("%d", &x);

    Pi(x);

    return 0;
}