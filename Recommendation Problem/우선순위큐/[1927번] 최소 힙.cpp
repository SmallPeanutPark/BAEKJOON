#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    priority_queue<int, vector<int>, greater<int>> pq;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            if (pq.empty()) cout << "0" << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            // 2^31보다 작은 자연수
            pq.push(x);
        }
    }

    return 0;
}
