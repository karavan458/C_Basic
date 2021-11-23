#include<stdio.h>

int main() {
    int hour;
    int min;
    int sec;

    printf("초(sec)를 입력해주세요 : ");
    scanf("%d", &sec);

    if(sec >= 3600){
        hour = sec / 3600;
        sec %= 3600;
        if(sec >= 60){
            min = sec / 60;
            sec %= 60;
            printf("%d시 %d분 %d초", hour, min, sec);
        }
        else {
            printf("%d시 %d초", hour, sec);
        }
    }
    else {
        min = sec / 60;
            sec %= 60;
            printf("%d분 %d초", min, sec);
    }
    return 0;
}