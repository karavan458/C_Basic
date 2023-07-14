#include<iostream>

int main() {
    char name[100];
    char number[100];

    std::cout << "input your name : ";
    std::cin >> name;

    std::cout << "input your phone number : ";
    std::cin >> number;

    std::cout << "your name is " << name << "\n" << 
    "your phone number is " << number << std::endl;
    return 0;
}