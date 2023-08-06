#include<iostream>

using namespace std;

class Calculator {
    private:
        int countOfAdd;
        int countOfDiv;
        int countOfMin;
        int countOfMul;
    
    public:
        void Init() {
            countOfAdd = 0;
            countOfMin = 0;
            countOfDiv = 0;
            countOfMul = 0;
        }

        double Add(double num1, double num2) {
            countOfAdd++;
            return num1 + num2;
        }

        double Min(double num1, double num2) {
            countOfMin++;
            return num1 - num2;
        }

        double Mul(double num1, double num2) {
            countOfMul++;
            return num1 * num2;
        }
        
        double Div(double num1, double num2) {
            countOfDiv++;
            return num1 / num2;
        }

        void ShowOpcount() {
            cout << "덧셈 : " << countOfAdd << '\t' << "뺄셈 : " << countOfMin << '\n' 
            << "곱셈 : " << countOfMul << '\t' << "나눗셈 : " << countOfDiv << endl << endl;
        }
};

int main() {
    Calculator cal;
    cal.Init();

    cout << "3.2 + 2.4 : " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 : " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 : " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 : " << cal.Div(4.9, 1.2) << endl;
    
    cal.ShowOpcount();
    return 0;
}