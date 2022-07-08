#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int num;
    cin >> num;
    
    for(int i = num; i >= 1; --i) {
        // 규칙 2 * n - 1
        int starvalue = 2 * i -1 ;

        for(int j = i; j < num; ++j) {
            cout <<' ';
        }

        for(int k = 1; k <= starvalue; ++k) {
            cout << '*';
        }

        cout << '\n';
    }
    return 0;
}
