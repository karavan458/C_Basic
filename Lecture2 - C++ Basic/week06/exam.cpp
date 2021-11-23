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
};

int main() {

    Point p1;
    p1.CopyPoint(p1);
    
    return 0;
}

//호출되는 객체는 복사의 개념이기 때문에 디폴트 생성자는 실행되지 않는다.