#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a%b);
}

int main(void) {
    long long int a, b;
    cin >> a >> b;
    int val = gcd(a,b);
    cout << a*b / val;
}
