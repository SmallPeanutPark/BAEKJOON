#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string A, B;
    char oper;
    cin >> A;
    cin >> oper;
    cin >> B;
    if(oper == '*') {
        // *
        int alen = A.length() - 1;
        int blen = B.length() - 1;
        int sum = alen + blen;
        string one = "1";
        for(int i = 0; i < sum; ++i) {
            one += '0';
        }
        cout << one;
    } else {
        // +
        int alen = A.length();
        int blen = B.length();
        
        if(alen > blen) {
            int sum = alen - blen - 1;
            string one = "1";
            for(int i = 0; i < sum; ++i) {
                one += '0';
            }
            one += B;
            cout << one;
        } else if(alen < blen) {
            int alen = A.length();
            int blen = B.length();
            int sum = blen - alen - 1;
            string one = "1";
            for(int i = 0; i < sum; ++i) {
                one += '0';
            }
            one += A;
            cout << one;
        } else {
            int z =  (A[0] - '0') + (B[0] - '0');
            int alen = A.length();
            string one = to_string(z);
            for(int i = 0; i < alen -1; ++i) {
                one += '0';
            }
            cout << one;
        }
        
    }
    return 0;
}
