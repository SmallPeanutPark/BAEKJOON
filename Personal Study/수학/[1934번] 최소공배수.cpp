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
    int T;
    cin >> T; // 테스트 케이스 수
    for(int i = 0; i < T; ++i) {
        int a, b;
        cin >> a >> b;

        if(a > b) {
            int val = gcd(a,b);
            cout << a*b / val << '\n';
        } else {
            int val = gcd(b,a);
            cout << b*a / val << '\n';
        }
    } 
}
