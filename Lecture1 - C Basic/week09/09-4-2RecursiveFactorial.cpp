#include<stdio.h>

int Factorial(int num) {
    if(num == 1){
        return 1;
    }
    else {
        return num * Factorial(num - 1);
    }
}

int main() {
    printf("1! = %d\n", Factorial(1));
    printf("1! = %d\n", Factorial(2));
    printf("1! = %d\n", Factorial(3));
    printf("1! = %d\n", Factorial(4));
    printf("1! = %d\n", Factorial(9));

    return 0;
}