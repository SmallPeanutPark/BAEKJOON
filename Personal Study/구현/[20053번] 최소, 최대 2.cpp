#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int N; cin >> N;
        priority_queue<int> max_pq;
        priority_queue<int, vector<int>, greater<int>> min_pq;
        for(int j = 0; j < N; ++j) {
            int n; cin >> n;
            max_pq.push(n);
            min_pq.push(n);
        }
        cout << min_pq.top() << ' ' << max_pq.top() << '\n';
    }
    return 0;
}
