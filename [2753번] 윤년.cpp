#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    int year;
    std::cin >> year;

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        std::cout << 1;
    } else {
        std::cout << 0;
    }
}
