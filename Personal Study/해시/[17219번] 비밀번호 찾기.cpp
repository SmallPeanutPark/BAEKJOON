#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M; // 주소의 수, 비밀번호를 찾으려는 사이트 주소
    map<string, string> m;
    for(int i = 0; i < N; ++i) {
        string address, password;
        cin >> address >> password;
        m.insert({address, password});
    }

    for(int i = 0; i < M; ++i) {
        string address; cin >> address;
        auto iter = m.find(address);
        if(iter != m.end()) {
            cout << iter->second << '\n';
        }
    }
    return 0;
}
