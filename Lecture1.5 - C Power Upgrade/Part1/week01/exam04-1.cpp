//키보드로 부터 EOF가 입력될 때까지 문자를 입력 받아서, 입력된 문자의 총 개수를 출력하는 프로그램 작성
//그저 입력된 문자의 개수만 출력하면 된다. 
//입력 받은 문자들을 저장해 줄 필요가 없다는 의미

#include<stdio.h>

int main(){
    int total = 0;
    char c1;

    while(1) {
        fputs("Data input : (Ctrl + Z to exit) ", stdout);
        c1 = getchar();
        if(c1 == EOF) {
            break;
        }

        fflush(stdin);
        total++;
    }

    printf("입력된 문자의 수 : %d\n", total);
    return 0;
}