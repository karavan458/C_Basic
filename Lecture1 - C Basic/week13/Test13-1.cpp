#include<stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5};
    int * ptr = arr;

    for (int i = 0; i <= 4; i++) {
        *ptr += 2;
        ptr++;
    }

    for (int i = 0 ; i <= 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}