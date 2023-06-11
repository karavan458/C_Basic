#include<stdio.h>

int main() {
    int num;

    printf("반복 횟수 입력 : ");
    scanf("%d", &num);

    int x = 0;
    while(x < num){
        printf("Hello World\n");
        x++;
    }    

    return 0;
}