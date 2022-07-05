#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    int arr[3];
    int a, b, c, d;
    for (int i = 0; i < 3; ++i) {
        std::cin>> a >> b >> c >> d;
        arr[i] = a + b + c + d;
        // 더한 결과를 보고 도, 개, 걸, 윷, 모를 판단
    }

    for(int i = 0; i < 3; ++i) {
        if (arr[i] == 3) {
            // 도
            std::cout << 'A' << '\n';
        } else if (arr[i] == 2) {
            // 개
            std::cout << 'B' << '\n';
        } else if (arr[i] == 1) {
            // 걸
            std::cout << 'C' << '\n';
        } else if(arr[i] == 0) {
            // 윷
            std::cout << 'D' << '\n';
        } else {
            // 모
            std::cout << 'E' << '\n';
        }
    }

    return 0;
}
