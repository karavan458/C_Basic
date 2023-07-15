#include<iostream>

void swap (int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap (char * a, char * b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void swap (double * a, double * b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = 'B';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double d1 = 1.111, d2 = 5.555;
    swap(&d1, &d2);
    std::cout << d1 << ' ' << d2 << std::endl;
    return 0;
}