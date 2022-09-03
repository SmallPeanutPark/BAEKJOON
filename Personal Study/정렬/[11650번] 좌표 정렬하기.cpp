#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<pair<int, int>> v;
    for(int i = 0; i < N; ++i) {
        int x, y; cin >> x >> y;
        v.emplace_back(make_pair(x, y));
    }
    // x 좌표가 증가하는 순으로 정렬, x좌표가 같다면 y 좌표가 증가하는 순서로 정렬
    sort(v.begin(), v.end());
    for(pair<int, int> element : v) {
        cout << element.first << ' ' << element.second << '\n';
    }
    return 0;
}
