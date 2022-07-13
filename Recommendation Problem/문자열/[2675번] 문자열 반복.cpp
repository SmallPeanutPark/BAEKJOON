#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T; // 테스트 케이스 개수
    for(int i = 0; i < T; ++i) {
        int R;
        string s;
        cin >> R >> s;
        int len = s.length();
        for(int j = 0; j < len; ++j) {
            for(int k = 0; k < R; ++k) {
                cout << s[j];
            }
        }
        cout << '\n';
    }
    return 0;
}
