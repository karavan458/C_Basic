#include<stdio.h>

int Squ(int n) {
    if(n == 0){
        return 1;
    }
    else {
        return 2 * Squ(n -1);
    }
}


int main() {
    int x;

    printf("2^N n = ");
    scanf("%d", &x);

    printf("2 ^ N = %d", Squ(x));
    return 0;
}