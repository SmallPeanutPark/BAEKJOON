#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end()); // 오름 차순
    int M; cin >> M;
    for(int i = 0; i < M; ++i) {
        int n; cin >> n;
        cout << upper_bound(v.begin(), v.end(), n) - lower_bound(v.begin(), v.end(), n) << ' ';
    }
    return 0;
}
