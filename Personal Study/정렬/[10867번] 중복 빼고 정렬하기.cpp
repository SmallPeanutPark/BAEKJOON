#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<int> v;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int element : v) {
        cout << element << ' ';
    }
    return 0;
}
