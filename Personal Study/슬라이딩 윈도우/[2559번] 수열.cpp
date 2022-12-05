#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int calculateMax(int t) {
    int gSize = v.size();
    int maxValue = 0;
    for(int i = 0; i < t; ++i) {
        maxValue += v[i];
    }
    int result = maxValue;
    for(int i = t; i < gSize; ++i) {
        result += (v[i] - v[i - t]);
        maxValue = max(maxValue, result);
    }
    return maxValue;
}

int main(void) {
    int N, K; cin >> N >> K;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    cout << calculateMax(K);
}
