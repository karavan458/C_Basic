#include<stdio.h>

int WhoIsFrist(int age1, int age2, int (*cmp)(int n1, int n2)) {
    return cmp(age1, age2);
}

int OlderFrist(int age1, int age2) {
    if(age1 > age2) {
        return age1;
    }
    else if(age2 > age1) {
        return age2;
    }
    else{
        return 0;
    }
}

int YoungerFrist(int age1, int age2) {
    if(age1 < age2) {
        return age1;
    }
    else if(age1 > age2) {
        return age2;
    }
    else {
        return 0;
    }
}

int main() {
    int age1 = 20;
    int age2 = 30;
    int first;

    printf("입장 순선 1 \n");
    first = WhoIsFrist(age1, age2, OlderFrist);
    printf("%d세와 %d세중 %d세가 먼저 입장 \n\n", age1, age2, first);

    printf("입장 순선 2 \n");
    first = WhoIsFrist(age1, age2, YoungerFrist);
    printf("%d세와 %d세중 %d세가 먼저 입장 \n\n", age1, age2, first);
    return 0;
}