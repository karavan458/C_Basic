#include<iostream>

namespace BestComImpl {
    void SimpleFunc(void);
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main() {
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc() {
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc() {
    std::cout << "ProComp이 정의한 함수" << std::endl;
}