#include<iostream>

using namespace std;

class Point { 
    private : 
        int x;
        int y;
    
    public : 
        bool InitMembers(int xpos, int ypos) {
            if(xpos < 0 || ypos < 0) {
                cout << "벗어난 범위의 값 전달" << endl;
                return false;
            }

            x = xpos;
            y = ypos;
            return true;
        }

        int GetX() const {
            return x;
        }

        int GetY() const {
            return y;
        }

        bool SetX(int xpos) {
            if(0 > xpos || xpos > 100) {
                cout << "벗어난 범위의 값 전달" << endl;
                return false;
            }

            x = xpos;
            return true;
        }

        bool SetY(int ypos) {
            if(0 > ypos || ypos > 100) {
                cout << "벗어난 범위의 값 전달" << endl;
                return false;
            }

            y = ypos;
            return true;
        }
};

class Rectangle {
    private : 
        Point upLeft;
        Point lowRight;

    public : 
        bool InitMembers(const Point &ul, const Point &lr) {
            if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
                cout << "잘못된 위치정보 전달" << endl;
                return false;
            }

            upLeft = ul;
            lowRight = lr;
            return true;
        }

    void ShowRecInfo() const { 
        cout << "좌 상단 : " << '[' << upLeft.GetX() << ", ";
        cout << upLeft.GetY() << ']' << endl;
        cout << "우 하단 : " << '[' << lowRight.GetX() << ", ";
        cout << lowRight.GetY() << ']' << endl;
    }
};

int main() {
    Point pos1;
    if(!pos1.InitMembers(-2, 4)) {
        cout << "초기화 실패" << endl;
    }
    if(!pos1.InitMembers(2, 4)) {
        cout <<"초기화 실패" << endl;
    } 

    Point pos2;
    if(!pos2.InitMembers(5, 9)) {
        cout << "초기화 실패" << endl;
    }

    Rectangle rec;
    if(!rec.InitMembers(pos2, pos1)) {
        cout << "직사각형 초기화 실패" << endl;
    }
    if(!rec.InitMembers(pos1, pos2)) {
        cout << "직사각형 초기화 실패" << endl;
    }

    rec.ShowRecInfo();
    return 0;
}