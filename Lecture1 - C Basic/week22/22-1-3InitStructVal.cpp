#include<stdio.h>

struct point{
    int xpos;
    int ypos;
};

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};


int main() {
    struct point pos = {10, 20};
    struct person man = {"이승기", "010-0000-0000", 21};

    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}
