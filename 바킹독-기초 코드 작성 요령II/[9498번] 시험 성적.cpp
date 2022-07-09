#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    int num;
    std::cin>> num;
    if ((num >= 90) && (num <=100)){
        std::cout << 'A';
    } else if((num >= 80) && (num <= 89)) {
        std::cout << 'B';
    } else if((num >= 70) && (num <= 79)) {
        std::cout << 'C';
    } else if((num >= 60) && (num <= 69)) {
        std::cout << 'D';
    } else {
        std::cout << 'F';
    }
    return 0;       
}
