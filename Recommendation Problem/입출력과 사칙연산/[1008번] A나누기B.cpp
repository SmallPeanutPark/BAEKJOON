#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double a, b;
    cin >> a >> b;
    cout.precision(9);
    cout.setf(ios::fixed);
    double d = a / b;
    cout << d;
}
