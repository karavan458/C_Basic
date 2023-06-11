#include<stdio.h>

typedef struct perosn {
    char name[20];
    char phoneNum[20];
    int age;
} Person;

void ShowPersonInfo(Person man) {
    printf("name : %s \n", man.name);
    printf("phone : %s \n", man.phoneNum);
    printf("age : %d \n", man.age);
}

Person ReadPersonInfo() {
    Person man;
    printf("name : "); scanf("%s", man.name);
    printf("phone : "); scanf("%s", man.phoneNum);
    printf("age : "); scanf("%d", &man.age);
    return man;
}

int main() {
    Person man = ReadPersonInfo();
    ShowPersonInfo(man);
    return 0;
}