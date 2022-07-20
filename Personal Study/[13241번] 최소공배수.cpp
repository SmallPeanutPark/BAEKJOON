#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int r = 0;
    while(true) {
        r = a % b;
        if(r == 0) break;
        a = b;
        b = r;
    }
    return b;
}

int main(void) {
    long long int a, b;
    cin >> a >> b;
    int val = gcd(a,b);
    cout << a*b / val;
}
