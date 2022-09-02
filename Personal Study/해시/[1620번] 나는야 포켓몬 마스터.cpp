#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M; // 포켓몬의 개수, 맞춰야하는 문제의 개수
    map<string, int> name_idx;
    map<int, string> idx_name;
    for(int i = 1; i <= N; ++i) {
        string str; cin >> str;
        name_idx.insert({str, i});
        idx_name.insert({i, str});
    }

    for(int i = 0; i < M; ++i) {
        string str; cin >> str;
        auto iter = name_idx.find(str);
        if(iter != name_idx.end()) {
            // 찾음
            cout << iter->second << '\n';
            continue;
        } else {
            // 못찾음
            int num = stoi(str);
            auto it = idx_name.find(num);
            if(it != idx_name.end()) {
                cout << it->second << '\n';
                continue;
            }
        }
    }
    return 0;
}
