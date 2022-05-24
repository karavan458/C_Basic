#include<stdio.h>

void MaxAndMin(int * arr, int ** maxValue, int ** minValue, int len) {
    int * max = &arr[0];
    int * min = &arr[0];

    for(int i = 0; i < len; i++) {
        if(*max < arr[i]) {
            max = &arr[i];
        }
        if(*min > arr[i]) {
            min = &arr[i];
        }
    }

    *maxValue = max;
    *minValue = min;

    printf("MaxValue = %d, MinValue = %d", **maxValue, **minValue);

}

int main() {
    int * maxPtr;
    int * minPtr;
    int arr[5];

    for (int i = 0; i <= 4; i++) {
        printf("input value : ");
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, &maxPtr, &minPtr, sizeof(arr) / sizeof(int));
    return 0;
}