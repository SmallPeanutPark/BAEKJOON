#include <iostream>

using namespace std;

// 최대 공약수 구하는 메서드
int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

// 최소 공배수 구하는 메서드
int lcm(int a, int b) {
    return (a * b) / gcd(a,b);
}


int main(void) {
    int a, b;
    cin >> a >> b; // 두 수를 입력 받는다.
    if(a > b) {
        cout << gcd(a, b) << '\n';
        cout << lcm(a, b) << '\n';
    } else {
        cout << gcd(b, a) << '\n';
        cout << lcm(b, a) << '\n';
    }

    return 0;
}
