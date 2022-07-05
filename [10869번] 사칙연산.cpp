#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    int A, B;
    std::cin >> A >> B;
    std::cout << A+B << '\n';
    std::cout << A-B << '\n';
    std::cout << A*B << '\n';
    std::cout << A/B << '\n';
    std::cout << A%B << '\n';
    return 0;       
}
