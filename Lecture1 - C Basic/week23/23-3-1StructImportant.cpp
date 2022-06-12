#include<stdio.h>

typedef struct student {
    char name[20];
    char stdnum[20];
    char school[20];
    char major[20];
    int year;
} Student;

void ShowStudentInfo(Student* sptr) {
    printf("학생이름 : %s \n학생 번호 : %s \n학교 이름 : %s \n전공 : %s \n학년 : %d \n\n ", 
    sptr->name, sptr->stdnum, sptr->school, sptr->major, sptr->year);
}

int main() {
    Student arr[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("이름 : "); scanf("%s", arr[i].name);
        printf("학번 : "); scanf("%s", arr[i].stdnum);
        printf("학교 : "); scanf("%s", arr[i].school);
        printf("전공 : "); scanf("%s", arr[i].major);
        printf("학년 : "); scanf("%s", &arr[i].year);
    }

    for(i = 0; i < 2; i++) {
        ShowStudentInfo(&arr[i]);
    }

    return 0;
}