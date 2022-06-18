#include<stdio.h>

int main() {
    char name[10];
    char sex;
    int age;

    FILE* fp = fopen("Friend.txt", "rt");
    int ret;

    while(1) {
        ret = fscanf(fp, "%s %c %d", name, &sex, &age);
        if(ret == EOF) {
            break;
        }
        printf("%s %c %d", name, sex, age);
    }

    fclose(fp);
    return 0;                                 
}