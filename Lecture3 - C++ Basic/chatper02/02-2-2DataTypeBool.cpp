#include<iostream>

using namespace std;

bool IsPostive(int num) {
    if(num <= 0) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    bool isPos;
    int num;
    cout << "Input number : ";
    cin >> num;

    isPos = IsPostive(num);
    if(isPos) {
        cout << "Positive number" << endl;
    }
    else {
        cout << "Negative number" << endl;
    }

    return 0;
}