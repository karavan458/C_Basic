#include<stdio.h>

void SoSimpleFunc(void) {
    printf("call sosimplefunc");
}

int main() {
    int num = 20;
    void * ptr;

    ptr = &num;
    printf("%p\n", ptr);

    //C파일이라면 가능하지만 C++에서는 불가능한 문법이다.
    //ptr = SoSimpleFunc;
    //printf("%p\n", ptr);

    return 0;
}