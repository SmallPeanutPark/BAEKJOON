#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        pq.push(n);
    }

    int cnt = 2;
    int num = 0;
    int ans = 0;
    while(!pq.empty()) {
        num += pq.top();
        pq.pop();
        cnt -= 1;
        if(cnt == 0) {
            ans += num;
            pq.push(num);
            num = 0;
            cnt = 2;
        }
    }
    cout << ans;
}
