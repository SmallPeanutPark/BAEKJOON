#include <bits/stdc++.h>
using namespace std;

vector<int> LIS;
vector<int> ans;
vector<pair<int, int>> backtrace;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N; // 수열의 크기
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        if(LIS.empty()) {
            LIS.emplace_back(n);
            backtrace.push_back({LIS.size() - 1, n});
        } else {
            if(LIS.back() < n) {
                LIS.emplace_back(n);
                backtrace.push_back({LIS.size() - 1, n});
            } else {
                auto location = lower_bound(LIS.begin(), LIS.end(), n);
                LIS[location - LIS.begin()] = n;
                backtrace.push_back({location - LIS.begin(), n});
            }
        }
    }
    cout << LIS.size() << '\n';
    int len = LIS.size() - 1;
    for(int i = N -1; i >= 0; --i) {
        if(backtrace[i].first == len) {
            len -= 1;
            ans.emplace_back(backtrace[i].second);
        }
    }

    sort(ans.begin(), ans.end());
    for(int element : ans) {
        cout << element << ' ';
    }
   
    return 0;
}
