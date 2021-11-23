#include <iostream>

using namespace std;

template<typename T>
class MyStack { 
    int m_top_index; // top of stack
    T m_data[100]; // T 타입의 스택. 스택의 크기는 100
public: 
    MyStack(); // 생성자 함수
    void Push(T element); // element를 m_data[ ]스택에 삽입
    T Pop(); //스택 탑에 있는 데이터를 m_data[ ]스택에서 삭제하고 값을 반환
    T Peek(); //스택 탑에 있는 데이터를 m_data[ ]스택에서 삭제하지 않고 값을 반환
};

template<typename T>
MyStack<T>::MyStack() {
    m_top_index = 0; // 스택은 비어 있음
}

template<typename T>
void MyStack<T>::Push(T element) {  // Push( ) 함수 구현
    if(m_top_index == 100) {
        cout << "stack full"; return; 
    } 
    
    m_data[m_top_index] = element; 
    m_top_index++;
}

template<typename T>
T MyStack<T>::Pop() {   // Pop( ) 함수 구현
    if(m_top_index == 0) { 
        cout << "stack empty"; 
        return 0; // 오류 표시
    } 
    
    m_top_index--;
    return m_data[m_top_index];
}

template<typename T>
T MyStack<T>::Peek() {   // Peek( ) 함수 구현
    if(m_top_index == 0) { 
        cout << "stack is empty"; 
        return 0; // 오류 표시
    } 
    
    return m_data[m_top_index-1];
}

int main() { 
    MyStack<int> iStack; //iStack 이름을 가진 객체를 생성한다.(자료형은 int) 
    iStack.Push(3); // iStack 객체에 3을 삽입한다. 
    iStack.Push(5); // iStack 객체에 5를 삽입한다. 
    cout << iStack.Peek() << endl; // iStack에서 데이터를 삭제하지 않고 값을 반환
    cout << iStack.Pop() << endl; // iStack에서 데이터를 삭제하고 값을 반환
    
    MyStack<double> dStack; //dStack 이름을 가진 객체를 생성한다.(자료형은 double) 
    dStack.Push(2.2); // dStack 객체에 2.2를 삽입한다. 
    cout << dStack.Pop() << endl; // dStack에서 데이터를 삭제하고 값을 반환
    
    // 동적으로 객체를 생성한다. (자료형은 char) 
    MyStack<char> *p = new MyStack<char>;
    p->Push('k'); // 포인터 p가 가리키는 객체에 k를 삽입한다.
    cout << p->Pop() << endl; // p 객체에서 데이터를 삭제하고 값을 반환
    cout << p->Peek() << endl; // p 객체에서 데이터를 삭제하지 않고 값을 반환
    delete p;

    return 0;
}