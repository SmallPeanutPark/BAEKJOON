#include <bits/stdc++.h>
using namespace std;
vector<int> v;

unsigned long long calculateSum(int range) {
    // init
    unsigned long long sum = 0;
    unsigned long long gMax = 0;
    for(int i = 0; i < range; ++i) {
        sum += v[i];
    }
    gMax = sum;
    int len = v.size();
    for(int j = range; j < len; ++j) {
        sum += (v[j] - v[j - range]);
        gMax = max(gMax, sum);
    }
    return gMax;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        v.emplace_back(num);
    }
    cout << calculateSum(m);
    return 0;
}
