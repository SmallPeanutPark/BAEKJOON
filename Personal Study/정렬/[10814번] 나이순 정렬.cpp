#include <bits/stdc++.h>

using namespace std;

vector<pair<int, string>> info;

bool cmp(pair<int, string> p1, pair<int, string> p2) {
    return p1.first < p2.first;
}

int main(void) {
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        pair<int, string> p;
        cin >> p.first >> p.second;
        info.emplace_back(p);
    }
    stable_sort(info.begin(), info.end(), cmp);
    for(pair<int, string> element : info) {
        cout << element.first << ' ' << element.second << '\n';
    }
    return 0;
}
