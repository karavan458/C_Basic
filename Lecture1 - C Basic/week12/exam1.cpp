#include<stdio.h>

int main() {
    int a = 0;
    int hap = 0;

    while(a < 5) {
        ++a;
        hap += a;
        printf("%d\n",a);
        printf("%d\n", hap);
    }
    
    return 0;
}