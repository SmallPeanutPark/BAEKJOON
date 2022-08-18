#include <bits/stdc++.h>
using namespace std;

vector<int> LIS;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N; // 수열의 크기
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        if(LIS.empty()) {
            LIS.emplace_back(n);
        } else {
            if(LIS.back() < n) {
                LIS.emplace_back(n);
            } else {
                auto location = lower_bound(LIS.begin(), LIS.end(), n);
                LIS[location - LIS.begin()] = n;
            }
        }
    }
    cout << LIS.size();
    return 0;
}
