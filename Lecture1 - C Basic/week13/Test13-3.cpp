#include<stdio.h>

int main() {
    int total = 0;
    int arr[5] = {1, 2, 3, 4, 5};  
    int* ptr = (arr + 4);

    for(int i = 0; i <= 4; i++) {
        printf("%d ", *(ptr - i));
        total += *(ptr - i);
    }
    
    printf("\n");
    printf("%d", total);
    
    return 0;
}