#include<stdio.h>

int main() {
    int temp;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int * ptr1 = arr;
    int * ptr2 = (arr + 5);

    printf("%d, %d\n", *ptr1, *ptr2);

    for (int i = 0 ; i <= 2; i++) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1 += 1;
        ptr2 -= 1;
    }    

    for(int i = 0 ; i <= 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}