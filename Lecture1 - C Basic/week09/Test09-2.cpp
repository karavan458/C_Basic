#include<stdio.h>

double CalToFah(double x){
    return ((double)x * 1.8) + 32;
}

double FahToCel(double x){
    return ((double)x -32) / 1.8;
}

int main() {
    int deg;
    double degree;
    
    printf("1. 화씨, 2. 섭씨 변경하고 싶은 단위 선택 : ");
    scanf("%d", &deg);
    
    if(deg == 1){
        printf("화씨 온도를 입력 : ");
        scanf("%lf", &degree);
        printf("변환 결과 : %f", FahToCel(degree));
    }
    else{
        printf("섭씨 온도를 입력 : ");
        scanf("%lf", &degree);
        printf("%f", CalToFah(degree));
    }

    return 0;
}