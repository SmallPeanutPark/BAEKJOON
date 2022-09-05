#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B; cin >> A >> B;
    vector<int> v;
    A += B;
    for(int i = 0; i < A; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end());
    for(int element : v) {
        cout << element << ' ';
    }
    return 0;
}
