#include<stdio.h>

int NumberCompare(int x, int y){
    return x > y ? x : y;
}

int main() {
    printf("3과 4중 큰 수는 : %d\n", NumberCompare(3, 4));
    printf("7과 2중 큰 수는 : %d\n", NumberCompare(7, 2));
    return 0;
}