#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<pair<int, int>> v;
    for(int i = 0; i < N; ++i) {
        int start, end; cin >> start >> end;
        v.emplace_back(make_pair(start, end));
    }
    sort(v.begin(), v.end());
    int rowLen = v.size();
    priority_queue<int, vector<int>, greater<int>> room;
    for(int i = 0; i < rowLen; ++i) {
        if(room.empty()) {
            room.push(v[i].second);
        } else {
            if(room.top() > v[i].first) {
                room.push(v[i].second);
            } else {
                room.pop();
                room.push(v[i].second);
            }
        }
    }
    cout << room.size();
    return 0;
}
