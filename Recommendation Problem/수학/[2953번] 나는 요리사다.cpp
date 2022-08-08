#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> m;
    for(int i = 1; i <= 5; ++i) {
        for(int j = 0; j < 4; ++j) {
            int n;
            cin >> n;
            if(m.empty()) {
                m.insert({i, n});
            } else {
                m[i] += n;
            }
        }
    }

    int player = 0;
    int maxValue = 0;
    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        if(maxValue < iter->second) {
            player = iter->first;
            maxValue = iter->second;
        }
    }
    cout << player << ' ' << maxValue;
}
