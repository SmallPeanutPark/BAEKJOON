#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    map<string, int> m_str;
    for(int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        if(m_str.find(str) == m_str.end()) {
            m_str.insert({str, 0});
        }
    }

    int cnt = 0;
    for(int j = 0; j < M; ++j) {
        string str; cin >> str;
        if(m_str.find(str) != m_str.end()) {
            cnt += 1;
        }
    }
    cout << cnt;
}
