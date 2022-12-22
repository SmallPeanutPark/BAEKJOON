#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int K; cin >> K;
        priority_queue<long long, vector<long long>, greater<long long>> min_pq; // 최소힙
        for(int j = 0; j < K; ++j) {
            long long n; cin >> n;
            min_pq.push(n); // 가장 작은 값이 맨위로 오게된다.
        }
        long long ans = 0;
        while(!min_pq.empty()) {
            if(min_pq.size() == 1) {
                break;
            } else {
                long long num1 = min_pq.top();
                min_pq.pop();
                long long num2 = min_pq.top();
                min_pq.pop();
                ans += (num1 + num2);
                min_pq.push(num1 + num2);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
