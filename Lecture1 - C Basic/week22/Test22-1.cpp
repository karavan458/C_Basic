#include<stdio.h>

struct employee {
    char name[10];
    char personalNum[20];
    int sel;
};

int main() {
    struct employee man1;

    printf("이름 입력 : ");
    scanf("%s", man1.name);

    printf("주민번호 입력 : ");
    scanf("%s", man1.personalNum);

    printf("급여 입력 : ");
    scanf("%d", &man1.sel);

    printf("%s %s %d", man1.name, man1.personalNum, man1.sel);
    return 0;
}
