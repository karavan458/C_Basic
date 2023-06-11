#include<stdio.h>

struct employee {
    char name[10];
    char personalNum[20];
    int sel;
};

int main() {
    struct employee man[3];

    for(int i = 0; i < 3; i++) {
        printf("이름 입력 : ");
        scanf("%s", &man[i].name);

        printf("주민번호 입력 : ");
        scanf("%s", &man[i].personalNum);

        printf("급여 입력 : ");
        scanf("%d", &man[i].sel);
    }

    for(int i = 0; i < 3; i++) {
        printf("%s %s %d", man[i].name, man[i].personalNum, man[i].sel);
    }
    return 0;
}
