#include<iostream>

using namespace std;

/* 
복사생성자
1. 값의 의한 호출시 매개변수로 객체가 전달될 때
2. 다른 객체를 이용해 초기화되는 객체의 경우
3. 함수의 반환값으로 객체가 반환되는 경우
*/

class Point{
    int m_x;

public:
    Point(){
        cout<< "생성자 함수 호출" << endl;
        m_x =10;
    }

    Point(int a){
        m_x = a;
    }
    
    void Set_Point(int num){
        m_x = num;
    }
    
    //매개변수를 객체로 받는 함수
    void CopyPoint(Point p){
        p.Set_Point(100);
        cout << p.m_x << endl;
    }

    ~Point(){
        cout << "소멸자 호출" << endl;
    }

    void show() {
        cout << m_x << endl;
    }
};

int main() {

    Point P1; // 객체의 이름이 존재  
    P1 = Point(1); // 임시객체 임시객체는 이 줄을 벚어나면 바로 소멸함
    cout << "test" << endl;

    P1.show();

    /*
    임시객체 
    1. 이름이 없다. 맴버에 접근이 불가능하다. 
    2. 생성자와 소멸자를 호출한다. 
    3. ;을 만나는 순간 소멸자가 호출된다. -> ;에서 파괴된다.
    4. 임시객체를 대입하면 값이 복사된다.
    */
    
    return 0;
}

//호출되는 객체는 복사의 개념이기 때문에 디폴트 생성자는 실행되지 않는다.

// xcode  gcc 컴파일 