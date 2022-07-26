#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    priority_queue<int> pq;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        if (n > 0) {
            pq.push(n);
        }
        else {
            // n == 0
            if (pq.empty()) {
                cout << 0 << '\n';
            }
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }

    return 0;
}
