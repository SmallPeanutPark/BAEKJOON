#include <bits/stdc++.h>
using namespace std;

vector<int> LDS;

bool comp(const int &a, const int& b) {
    return a > b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        if(LDS.empty()) {
            LDS.emplace_back(n);
        } else {
            if(LDS.back() > n) {
                LDS.emplace_back(n);
            } else {
                auto location = lower_bound(LDS.begin(), LDS.end(), n, comp);
                *location = n;
            }
        }
    }
    cout << LDS.size();
    return 0;
}
