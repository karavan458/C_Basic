#include<stdio.h>

const int BREAD = 500;
const int SNACK = 700;
const int COKE = 400;

int main() {
    int money = 3500;

    printf("현재 당신의 보유 금액은 : %d\n", money);

    for(int i = 1; i < (money / BREAD); i++){
        for(int j = 1; j < (money / SNACK); j++) {
            for(int k = 1; k < (money / COKE); k++) {
                if(BREAD * i + SNACK * j + COKE * k == money){
                    printf("크림빵 %d개, 새우깡 %d개 콜라 %d개\n", i, j, k);
                }
            }
        }
    }
    printf("어떻게 구매 하시겠습니까? ");
    return 0;
}