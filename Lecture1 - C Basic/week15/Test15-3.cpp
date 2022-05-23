#include<stdio.h>

int main() {
    int arr[10];
    int num;
    int f = 0, b = 9;

    for(int i = 0; i <= 9; i++){
        printf("정수입력 : ");
        scanf("%d", &num);

        if(num % 2 == 1){
            arr[f++] = num;
        }
        else if(num % 2 == 0) {
            arr[b--] = num;
        }
    }

    for(int i = 0; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}