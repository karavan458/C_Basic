#include<stdio.h>

void ShowAllData(const int * arr, int len) {
    int i;
    for(i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
}

//배열의 출력이 목적인 함수이기에 배열을 상수로 선언하여 배열의 값을 변경하는 것을 실수로도 하는 것을 방지