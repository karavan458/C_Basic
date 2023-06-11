#include<iostream>
#include<string>
using namespace std;

class Base{
protected:
    int m_id;
public:
    Base(int id = 0){
        m_id = id;
    }

    void Show_Base() {
        cout << "개인번호(Base) : " << m_id << endl;
    }
};

class Derived1 : public virtual Base {
    string m_name;

public:
    Derived1(int id, string name):Base(id){
        m_name = name;
    }

    void Show_Derived1() {
        Show_Base();
        cout << "이름(Dervied1) : " << m_name << endl;
    }
};

class Derived2 : public virtual Base {
    string m_telno;
public:
    Derived2(int id, string telno):Base(id){
        m_telno = telno;
    }

    void Show_Derived2() {
        cout << "개인번호(Derived2) : " << m_id << endl;
        cout << "전화번호(Derived2) : " << m_telno << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
    string m_address;
public:
    Derived3(int id, string name, string telno, string address):Derived1(id, name), Derived2(id, telno){
        m_address = address;
        m_id = id;
    }

    void Show_Derived3() {
        Show_Derived1();
        Show_Derived2();
        cout << "주소(Derived3) : " << m_address << endl;
    }
};

int main() {
    Derived1 D1(11 ,"이단계");
    D1.Show_Derived1();

    Derived2 D2(12, "010-3210-1234");
    D2.Show_Derived2();

    cout << "----------------------------------\n";

    Derived3 D3(123, "삼단계", "010-4567-2222", "대전시 동구 용운동 96-3");
    D3.Show_Derived3();

    return 0;
}