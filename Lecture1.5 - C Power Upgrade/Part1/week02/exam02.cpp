/*
7개의 숫자를 정수 형태로 입력 받아서 입력 받은 수들의 
최대값, 최소값, 전체합, 그리고 평균을 구하는 프로그램을 작성
*/

#include<stdio.h>

int main() {
    int num1, max, min;
    int total = 0;
    double avg;


    printf("정수형 데이터 입력 : ");
    scanf("%d", &num1);

    max = num1;
    min = num1;
    total += num1;

    for(int i = 0; i < 6; i++) {
        printf("정수형 데이터 입력 : ");
        scanf("%d", &num1);

        if(min > num1) {
            min = num1;
        }

        if(max < num1) {
            max = num1;
        }

        total += num1;

    }

    avg = (float)total / 7;

    printf("최대값 : %d\n", max);
    printf("최소값 : %d\n", min);
    printf("전체합 : %d\n", total);
    printf("평균값 : %f\n", avg);
    return 0;
}
