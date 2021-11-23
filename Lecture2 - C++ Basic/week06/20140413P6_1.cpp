#include<iostream>

using namespace std;

class myclass{
    int n;

public:
    myclass(int i);
    void Set_n(int i);
    int Get_n();
};

myclass::myclass(int i){
    n = i;
}

void myclass::Set_n(int i){
    n = i;
}

int myclass::Get_n(){
    return n;
}

void Sqr_it_Address(myclass *ob){
    ob->Set_n(ob->Get_n() * ob->Get_n());
    cout << "ob 복사본의 n의 값은 " << ob->Get_n() << endl;
}

void Sqr_it_Reference(myclass &ob){
    ob.Set_n(ob.Get_n() * ob.Get_n());
    cout << "ob 복사본의 n의 값은 " << ob.Get_n() << endl;
}

void Sqr_it_Value(myclass ob){
    ob.Set_n(ob.Get_n() * ob.Get_n());
    cout << "ob 복사본의 n의 값은 " << ob.Get_n() << endl;
}

int main() {
    myclass ob(10);

    Sqr_it_Value(ob);
    cout << "값 인도 후 ob의 값은 " << ob.Get_n() << endl;
    
    Sqr_it_Address(&ob);
    cout << "주소 인도 후 ob의 값은 " << ob.Get_n() << endl;
    
    ob.Set_n(10);
    Sqr_it_Reference(ob);
    cout << "주소 인도 후 ob의 값은 " << ob.Get_n() << endl;
 
    return 0;
}