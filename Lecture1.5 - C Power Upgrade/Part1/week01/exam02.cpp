//이름을 입력 받아서 출력하는 프로그램을 작성하자
//단, 다음과 같은 형태의 입력을 모두 허용해야 한다.
//"홍빛나", "홍 빛 나", "홍  빛  나"

#include<stdio.h>

int main() {
    char name[100];

    fputs("문자열 입력 : ", stdout);
    gets(name);

    fputs("입력된 문자열 : ", stdout);
    puts(name);

    return 0;
}