#include<stdio.h>

void SwipArr(int (*arr)[4]) {
    //넘겨질 배열 값을 저장할 2차원 배열
    int swipArr[4][4];

    //역순으로 기존 배열의 가로줄이 저장될 배열에 마지막번의 세로줄에 저장되면 되는 로직
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            swipArr[j][3 - i] = arr[i][j];
        }
    }

    //다시 바뀐 배열을 매개변수로 전달되는 2차원 배열로 저장
    for(int i = 0; i < 4; i++) {
        for(int j = 0 ; j < 4; j++) {
            arr[i][j] = swipArr[i][j];
        }
    }

    //90도 회전한 2차원 배열 출력
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}

int main() {
    //2차원 배열 선언
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    //원상태로 돌아 올때 까지 반복문 (함수 실행)
    for(int i = 0; i < 4; i++) {
        SwipArr(arr);
    }

    return 0;
}