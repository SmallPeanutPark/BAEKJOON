#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
queue<int> minusq;

void init(int N) {
    for(int i = 1; i <= N; ++i) {
        dq.push_back(i);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M; // 큐의 크기, 뽑아내려는 갯수
    for(int i = 0; i < M; ++i) {
        int n; cin >> n; // 큐에서의 처음 위치
        minusq.push(n);
    }
    init(N);

    int count = 0;
    while(!minusq.empty()) {
       if(dq.front() == minusq.front()) {
            dq.pop_front();
            minusq.pop();
       } else {
            // 왼쪽, 오른쪽 연산이 최소가 될 수 있도록 위치 계산
            int curDqSize = dq.size();
            int find_Location = find(dq.begin(), dq.end(), minusq.front()) - dq.begin();
            int leftLocation = find_Location;
            int rightLocation = curDqSize - find_Location;
            if(rightLocation > leftLocation) {
                // 왼쪽으로 이동
                for(int i = 0; i < leftLocation; ++i) {
                    count += 1;
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            } else {
                // 오른쪽으로 이동
                for(int i = 0; i < rightLocation; ++i) {
                    count += 1;
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
       }
    }
    cout << count;
    return 0;
}
