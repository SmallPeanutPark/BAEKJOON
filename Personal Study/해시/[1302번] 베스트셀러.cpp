#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    map<string, int> m;
    int maxcount = 0;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        if(m.find(str) != m.end()) {
            m[str] += 1;
            maxcount = max(maxcount, m[str]);
        } else {
            m.insert({str, 1});
            maxcount = max(maxcount, m[str]);
        }
    }

    vector<string> str_v;
    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        if(iter->second == maxcount) {
            str_v.emplace_back(iter->first);
        }
    }
    sort(str_v.begin(), str_v.end());
    cout << str_v[0];
    return 0;
}
