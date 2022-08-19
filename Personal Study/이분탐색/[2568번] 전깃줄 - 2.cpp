#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> abwire;
vector<int> electronic;
vector<pair<int, int>> backtracking; // 인덱스, a 전봇대에 연결되는 위치


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int a, b; cin >> a >> b; 
        abwire.emplace_back(make_pair(a, b));
    }

    sort(abwire.begin(), abwire.end());

    for(int i = 0; i < N; ++i) {
        if(electronic.empty()) {
            electronic.emplace_back(abwire[i].second);
            backtracking.emplace_back(make_pair(electronic.size() -1, abwire[i].first));
        } else {
            if(electronic.back() < abwire[i].second) {
                electronic.emplace_back(abwire[i].second);
                backtracking.emplace_back(make_pair(electronic.size() -1, abwire[i].first));
            } else {
                auto location = lower_bound(electronic.begin(), electronic.end(), abwire[i].second);
                *location = abwire[i].second;
                backtracking.emplace_back(make_pair(location - electronic.begin(), abwire[i].first));
            }
        }
    }
    cout << N - electronic.size() << '\n';
    int gSize = electronic.size() - 1;
    vector<int> ans;
    for(int i = N - 1; i >= 0; --i) {
        if(gSize == backtracking[i].first) {
            // 연결된 전깃줄
            gSize -= 1;
        } else {
            // 연결 해제된 전깃줄
            ans.emplace_back(backtracking[i].second);
        }
    }
    sort(ans.begin(), ans.end());
    for(int element : ans) {
        cout << element << '\n';
    }
    return 0;
}
