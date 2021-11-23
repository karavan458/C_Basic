#include<iostream>

class Restaurant {
    int m_order[4];
    int m_price[4];
    int m_total;
    bool m_coupon;

public:
    Restaurant();
    int Get_Total();
    void Show_Food();
    void Num_Order(int *order);
    void Check_Money();
    void Check_Discount(bool m_coupon);
};

Restaurant::Restaurant() {
    m_price[0] = 15000;
    m_price[1] = 10000;
    m_price[2] = 7000;
    m_price[3] = 2000;   
    m_total = 0;
    m_coupon = false;
}

int Restaurant::Get_Total(){
    return m_total;
}

void Restaurant::Show_Food() {
    std::cout<<"====================================메뉴===================================\n";
    std::cout<<"1.피자(15,000원), 2.스파게티(10,000원), 3.샐러드(7,000원), 4.음료수(2,000원)\n";
    std::cout<<"===========================================================================\n";
}

void Restaurant::Num_Order(int *order){
    for(int i = 0; i < 4; i++){
        m_order[i] = *(order + i);
    }
    std::cout<<"주문하신 음식은 피자 "<<m_order[0]<<"개"<<"스파게티 "<<m_order[1]<<"개"<<"샐러드 "<<m_order[2]<<"개" << "음료수 "<<m_order[3]<<"개 입니다.\n";
}   

void Restaurant::Check_Money() {
    for(int i = 0; i < 4; i++){
        m_total += m_price[i] * m_order[i];
    }
}

void Restaurant::Check_Discount(bool m_coupon){
    this->m_coupon = m_coupon;
    
    if(this->m_coupon){
        std::cout << "할인쿠폰 20% 적용 => ";
        m_total *= 0.8;
    }
}

int main() {
    int num1;
    int i;
    std::cout << "총 식사팀 수 입력 : ";
    std::cin >> num1;

    Restaurant *p = new Restaurant[num1];

    for(i = 0; i < num1; i++){
        p[i].Show_Food();
        int order[4];
        char ans;
         
        std::cout << i + 1 <<"번팀 음식 주문 수량(순서대로 입력) >> ";
        for(int j = 0; j < 4; j++){
            std::cin >> order[j];
        }
        (p + i)->Num_Order(order);
        (p + i)->Check_Money();

        while(ans != 'Y' && ans != 'y' && ans != 'N'  && ans != 'n') {
            std::cout << "@ Y/y/N/n중 하나만 입력하세요 : ";
            std::cin >> ans;

            if(ans == 'y' || ans == 'Y'){
                p[i].Check_Discount(true);
            }
        }
        ans = 0;
        std::cout << i + 1 << "팀 주문 금액은 " << p[i].Get_Total() <<"원 입니다." << std::endl;
    }
    delete[] p;
    return 0;
}