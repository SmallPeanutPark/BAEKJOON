#include <bits/stdc++.h>

using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            int n; cin >> n;
            if(!pq.empty()) {
                int qSize = pq.size();
                if(qSize < N) {
                    pq.push(n);
                } else {
                    if(pq.top() < n) {
                        pq.pop();
                        pq.push(n);
                    }
                }
            } else {
                pq.push(n);
            }
        }
    }
    
    cout << pq.top() << '\n';
    return 0;
}
