#include<iostream>
using namespace std;

int main() {
    //메뉴판 구현
    cout << "======================================메뉴======================================\n";
    cout << "1. 피자(15,000원), " << "2. 스파게티(10,000원), " << "3. 샐러드(7,000원), " << "4. 음료수(2,000원)\n";
    cout << "================================================================================\n";
    
    //주문할 음식 및 수량 구현
    int type = 0;
    int count = 0;
    int sum = 0;
    int total = 0;
    int coupon = 0;
    char selection;

    do {
        //total으로 재주문 여부 확인 
        if(!(total != 0)){
            cout << "* 음식 선택 및 수량 ";
            cin >> type >> count;

            //음식의 가격
            if(type == 1){
                type = 15000;
            } else if(type == 2){
                type = 10000;
            } else if(type == 3){
                type = 7000;
            } else if(type == 4){
                type = 2000;
            } else {
                cout << "잘못된 입력입니다.";
                continue;
            }
            sum += type * count;
        
            cout <<"* 음식을 더 선택하시겠습니까? ";
            cin >> selection;
        }
        //selection이 y라면 다시 반복문 위로
        if(selection == 'y' || selection == 'Y'){
            continue;
        } else if (selection == 'n' || selection == 'N'){ //아닐경우 쿠폰을 입력
            total = sum;
            cout << "\n" <<"할인쿠폰을 입력하세요 [0 : 없음,  1. 5%,  2. 10%,  3. 20%] : ";
            cin >> coupon;
            
            if(coupon == 0){
                cout << "총 주문 금액은 " << total <<"입니다.";
                break;
            } else if(coupon == 1){
                total *=  0.95;
                cout << "총 주문금액은 " << total << "입니다.";
                break;
            } else if(coupon == 2){
                total *= 0.9;
                cout << "총 주문금액은 " << total << "입니다."; 
                break;
            } else if(coupon == 3){
                total *= 0.8;
                cout << "총 주문금액은 " << total << "입니다.";
                break;
            } else {    //잘못된 쿠폰 번호 입력시 다시 반복문 위로
                cout << "잘못된 쿠폰 번호입니다.\n";
                continue;
            }
        } else {
            cout << "@@ Y,y,N,n만 입력하세요 ";
            cin >> selection;
        } 

    } while(selection == 'Y' || selection == 'y' || selection == 'n' || selection == 'N');

    return 0;
}
