#include<stdio.h>

// 매개변수로 배열, 가장큰 값을 저장할 이중포인터, 가장 작은 값을 저장할 이중포인터, 배열의 길이를 전달 받음 
void MaxAndMin(int * arr, int ** maxValue, int ** minValue, int len) {
   
    //포인터 변수를 2개 선언하여 배열의 첫번째 인덱스의 주소값을 할당
    int * max = &arr[0];
    int * min = &arr[0];

    //가장 큰 값을 포인터 변수max에 저장, 가장 작은 값을 포인터min에 저장
    for(int i = 0; i < len; i++) {
        if(*max < arr[i]) {
            max = &arr[i];
        }
        if(*min > arr[i]) {
            min = &arr[i];
        }
    }

    //가장 큰 값과, 가장 작은 값이 저장되어 있는 주소값을 이중 포인터 변수에 저장 max, min은 주소값을 저장하는 포인터이니 이중포인터에서 *을 하나 뺌
    *maxValue = max;
    *minValue = min;


    //출력 
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