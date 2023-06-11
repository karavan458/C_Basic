#include<stdio.h>
#include<stdlib.h>

int main() {
    int len = 5;
    int idx = 0;
    int* ptr = (int *)malloc(sizeof(int) * len);

    while(1) {
        printf("input value : ");
        scanf("%d", &ptr[idx]);
        if(ptr[idx] == -1){
            break;
        }

        if(len == idx + 1) {
            len += 3;
            ptr = (int *)realloc(ptr, sizeof(int) * len);
        }
        idx++;
    }
    for(int i = 0; i < len; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;

}