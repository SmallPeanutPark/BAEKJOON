#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<long long, long long>& a, const pair<long long, long long>& b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    map<long long, long long> m;
    for(int i = 0; i < N; ++i) {
        long long n; cin >> n;
        if(m.find(n) != m.end()) {
            m[n] += 1;
        } else {
            m.insert({n, 1});
        }
    }

    vector<pair<long long, long long>> v;
    for(auto iter = m.begin(); iter != m.end(); iter++) {
        long long f_value = iter->first;
        long long s_value = iter->second;
        v.push_back({s_value, f_value});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1].second;
    return 0;
}
