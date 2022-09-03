#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> d, const pair<int, int> b) {
    if(d.second == b.second) {
        return d.first < b.first;
    } else {
        return d.second < b.second;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<pair<int, int>> v;
    for(int i = 0; i < N; ++i) {
        int x, y; cin >> x >> y;
        v.emplace_back(make_pair(x, y));
    }
    // y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 출력
    sort(v.begin(), v.end(), cmp);
    for(pair<int, int> element : v) {
        cout << element.first << ' ' << element.second << '\n';
    }
    return 0;
}
