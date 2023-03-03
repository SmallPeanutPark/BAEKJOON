#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void input(int N) {
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    sort(v.begin(), v.end());
    for(int element : v) {
        cout << element << '\n';
    }
    return 0;
}
