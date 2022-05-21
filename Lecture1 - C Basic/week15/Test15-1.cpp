#include<stdio.h>

const int idx = 10;

void PrintArray(int * arr) {
    for(int i = 0; i < idx; i++){
        if(arr[i] % 2 == 0) {
            printf("짝수 출력 : %d\n", arr[i]);
        }
        if(arr[i] % 2 == 1) {
            printf("홀수 출력 : %d\n", arr[i]);
        }
    }
}

int main() {
    int arr[idx];
    
    for (int i = 0; i <= 9; i++) {
        printf("값 입력 : ");
        scanf("%d", &arr[i]);
    }

    PrintArray(arr);

    return 0;
}