#include<stdio.h>

void ShowData(const int * ptr) {
    int * rptr = NULL; //= ptr;
    printf("%d \n", *rptr);
    *rptr = 20;
}

int main() {
    int num = 10;
    int * ptr = &num;
    ShowData(ptr);

    return 0;
}

//이 함수의 정의는 잘못된 것이다. 포인터변수를 상수로 받기 때문에 다른 포인터 변수에 변수의 값을 넣는 것은 불가능하다. 
//즉 *rptr이 ptr의 값을 변경시켜서는 안되기 때문에 컴파일러가 에러를 일으킨다.  