#include <iostream>

int arr[10000];

int main(void) {
    int N, X;

    std::cin >> N >> X;

    // 수열 입력
    for(int i = 0; i < N; ++i) {
        std::cin>> arr[i];
    }

    // X보다 작은 수를 입력 받은 순서대로 공백으로 구분해 출력한다. X보다 작은 수는 적어도 하나 존재한다.
    for(int i = 0; i < N; ++i) {
        if (arr[i] < X) {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}
