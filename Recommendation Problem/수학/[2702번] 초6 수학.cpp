#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

int lcd(int a, int b) {
    return (a * b) / gcd(a , b);
}

int main(void) {
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int a, b;
        cin >> a >> b;
        if(a > b) {
            cout << lcd(a, b) << ' ' << gcd(a, b) << '\n';
        } else {
            cout << lcd(b, a) << ' ' << gcd(b, a) << '\n';
        }
    }
    return 0;
}
