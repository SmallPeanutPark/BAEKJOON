#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
    int sum = 0; // 총합
    vector<int> v; // 소수 저장
    for (int i = M; i <= N; ++i) {
        if (isPrime(i)) {
            sum += i;
            v.push_back(i);
        }
    }

    if (v.empty()) {
        cout << -1;
    }
    else {

        cout << sum << '\n';
        cout << *min_element(v.begin(), v.end());
    }
    return 0;
}
