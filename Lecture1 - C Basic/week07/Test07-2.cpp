#include<stdio.h>

int main() {
    int num1;
    
    printf("정수 1개 입력 : ");
    scanf("%d", &num1);

    int x = 0;
    while(x < num1) {
        printf("%d\n", (3 * (x + 1)));
        x++;
    }

    return 0;
}