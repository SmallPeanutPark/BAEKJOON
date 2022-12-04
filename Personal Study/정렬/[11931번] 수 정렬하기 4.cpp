#include <bits/stdc++.h>

using namespace std;

priority_queue<int> pq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        pq.push(n);
    }

    while(!pq.empty()) {
        cout << pq.top() << '\n';
        pq.pop();
    }
    return 0;
}
