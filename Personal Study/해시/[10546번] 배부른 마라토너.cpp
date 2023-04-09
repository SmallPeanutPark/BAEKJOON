#include <bits/stdc++.h>
using namespace std;
map<string, int> m;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        // 참가자 중엔 동명이인이 있을 수 있다.
        if(m.find(str) != m.end()) {
            m[str] += 1;
        } else {
            // 처음
            m[str] = 1;
        }
    }

    for(int j = 0; j < N - 1; ++j) {
        string str; cin >> str;
        m[str] -= 1;
    }

    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        if(iter->second % 2 != 0) {
            cout << iter->first << '\n';
            break;
        }
    }
    return 0;
}
