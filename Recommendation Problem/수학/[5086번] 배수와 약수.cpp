#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    while(cin >> a >> b) {
        if((a == 0) && (b  == 0)) break;

        bool isfactor = false;
        bool ismultiple = false;
        bool isnot = false;
        if(a > b) {
            // 첫번째 숫자가 두번째 숫자의 배수인가? 확인
            if(a % b == 0) {
                // 배수임
                ismultiple = true;
            } else {
                isnot = true;
            }
            
        } else {
            // b > a
            // 첫번째 숫자가 두번째 숫자의 약수인가? 확인
            if(b % a == 0) {
                // 약수임
                isfactor = true;
            } else {
                isnot = true;
            }
        }

        if(isfactor) {
            cout << "factor" << '\n';
        } else if(ismultiple) {
            cout << "multiple" << '\n';
        } else if(isnot) {
            cout << "neither" << '\n';
        }
    }
    return 0;
}
