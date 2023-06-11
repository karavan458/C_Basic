#include<stdio.h>

int main() {
    char str[50] = "I like C Programming";
    printf("String = %s\n", str);

    str[8] = '\0';
    printf("String = %s\n", str);

    str[6] = '\0';
    printf("String = %s\n", str);

    str[1] = '\0';
    printf("String = %s\n", str);

    return 0;
}