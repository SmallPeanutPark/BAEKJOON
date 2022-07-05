#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    int a, b, c;
    std::cin>> a >> b >> c;
    if (a == b) {
        if (a == c) {
            // 같은 눈 3개
            std::cout << 10000 + (a *1000);
        } else {
            // 같은 눈 2개
            std::cout << 1000 + (a * 100);
        }
    } else if (a == c) {
        if (a == b) {
            // 같은 눈 3개
            std::cout << 10000 + (a *1000);
        } else {
            // 같은 눈 2개
            std::cout << 1000 + (a * 100);
        }
    } else if (b == c) {
        if (b == a) {
            // 같은 눈 3개
            std::cout << 10000 + (a *1000);
        } else {
            // 같은 눈 2개
            std::cout << 1000 + (b * 100);
        }
    } else {
        // 3개 다 다름
        int maxvalue = a > b ? a > c ? a : c : b > c ? b : c;
        std::cout << maxvalue * 100;
    }
    return 0;
}
