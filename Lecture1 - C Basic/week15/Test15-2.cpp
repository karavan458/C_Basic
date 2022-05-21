#include<stdio.h>

int main() {
    int arr[30] = {0,};
    int num = 1, count = 0;

    printf("input decimal number, change to binary number : ");
    scanf("%d", &num);

    while(1) {
        arr[count] = num % 2;
        num /= 2;
        count++;

        if(num == 0) {
            break;
        }  
    } 

    for(int i = (count - 1); i >= 0; i--) {
        printf("%d", arr[i]);
    }
    
    return 0;
}