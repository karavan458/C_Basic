#include<stdio.h>

int main() {
    int arr[5];
    int max, min;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        printf("정수 입력 : ");
        scanf("%d", &arr[i]);
        printf("\n");
    }

    max = arr[0], min = arr[0];
    for(int i = 0; i < 5; i++){
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    sum = max + min;

    printf("최대값 = %d\n", max);
    printf("최소값 = %d\n", min);
    printf("최대값 + 최소값 = %d\n", sum);

    return 0;
}