#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int num;
    cin >> num;
    
    int final = 2* num -1 ;
    for(int i = 1; i <= num; ++i) {
        // 규칙 2n
        int starvalue = (2 * i) / 2;
        int num = 0;
        for(int j = 1; j <= starvalue; ++j) {
            cout <<'*';
            
        }

        for(int k = starvalue; k <= final - i;++k) {
            cout <<' ';
        }

        for(int m = starvalue; m >= 1; --m) {
            cout <<'*';
        }

        cout << '\n';
    }

    for(int i = num -1; i >= 1; --i) {
        // 규칙 2n
        int starvalue = (2 * i) / 2;
        int num = 0;
        for(int j = 1; j <= starvalue; ++j) {
            cout <<'*';
        }

        for(int k = starvalue; k <= final - i;++k) {
            cout <<' ';
        }

        for(int m = starvalue; m >= 1; --m) {
            cout <<'*';
        }

        cout << '\n';
    }
    return 0;
}
