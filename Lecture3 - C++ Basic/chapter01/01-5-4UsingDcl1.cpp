#include<iostream>

namespace Hybird {
    void HybFunc() {
        std::cout << "So simple Function" << std::endl;
        std::cout << "In namespace Hybird" << std::endl;
    }
}

int main() {
    using namespace Hybird;
    HybFunc();
    return 0;
}