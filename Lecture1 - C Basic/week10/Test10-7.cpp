#include<stdio.h>

int main() {
    int num;
    int k;
    int inc = 1;
    
    printf("정수 입력 : ");
    scanf("%d", & num);

    if(num == 0) {
        printf("0입니다. ");
    }

    for(k = 0; inc * 2 <= num; k++){
		inc = inc * 2;
	}

    printf("2^%d <= %d", k, num);
    
    return 0;
}