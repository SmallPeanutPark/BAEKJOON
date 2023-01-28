#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int M; cin >> M;
        priority_queue<int> pq;
        vector<int> mid;
        int mididx = 0;
        for(int j = 1; j <= M; ++j) {
            int n; cin >> n;
            pq.push(n);

            if(j % 2 == 0) {
                // 짝수
            } else {
                // 홀수 : 현재 까지 입력의 중앙값을 저장
                mididx += 1;

                vector<int> v;
                while(pq.size() != mididx) {
                    v.emplace_back(pq.top());
                    pq.pop();
                }

                mid.emplace_back(pq.top());

                for(int element : v) {
                    pq.push(element);
                }
            }
        }

        int coutCnt = 0;
        cout << mid.size() << '\n';
        for(int element : mid) {
            coutCnt += 1;
            cout << element << ' ';
            if(coutCnt % 10 == 0) cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}
