#include<stdio.h>

int main() {
    int i = 0;
    int j = 0;

    while(i < 5){
        while(i > j){
            printf("o");
            j++;
        }
        printf("*\n");
        j = 0;
        i++;
    }
    
    return 0;
}