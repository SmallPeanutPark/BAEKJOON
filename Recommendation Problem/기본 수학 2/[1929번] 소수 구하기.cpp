#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << '\n';
        }
    }
    return 0;
}
