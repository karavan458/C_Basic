//키보드로 부터 데이터를 입력 받고, 입력 받은 데이터를 입력 순서 그대로 출력하는 프로그램을 작성하자 
//단, 반드시 다음 순서와 포맷으로 입력을 받아야 한다(콤마를 포함하여).
//[문자, 정수, 실수, 문자열]

#include<stdio.h>

int main() {
    char ch1;
    int num1;
    float num2;
    char str[4];

    printf("[문자, 정수, 실수, 문자]의 포멧으로 입력 : ");
    scanf("%c, %d, %f, %s", &ch1, &num1, &num2, str);
    
    
    printf("입력된 데이터 출력 : %c, %d, %f, %s", ch1, num1, num2, str);
    return 0;
}