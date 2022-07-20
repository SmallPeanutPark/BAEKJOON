#include <iostream>
#include <string>

using namespace std;

int gcd(unsigned long long a, unsigned long long b) {
    unsigned long long r = 0;
    while(true) {
        r = a % b;
        if(r == 0)
            break;
        a = b;
        b = r; 
    }

    return b;
}


int main(void) {
    unsigned long long a, b;
    cin >> a >> b;
    int len = 0;
    if (a > b) len = gcd(a, b);
    else len = gcd(b, a);

    string s;
    for(int i = 1; i <= len; ++i) {
        s += '1';
    }
    cout << s;
}
