#include<iostream>

int main() {
    int num;
    while (1) {
        std::cout << "판매 금액을 만원 단위로 입력 : ";
        std::cin >> num;
        
        if(num == -1) {
            break;
        }
        
        int salary = 50 + (num * 0.12);
        std::cout << "이번 달 급여 : " << salary << "만원" << std::endl;
    }
    return 0;
}