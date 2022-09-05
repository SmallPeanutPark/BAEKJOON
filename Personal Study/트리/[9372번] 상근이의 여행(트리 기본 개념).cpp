#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // 가장 적은 종류의 비행기를 타고 모든 국가 여행, 가중치 없음
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int N, M; cin >> N >> M; // 국가의 수, 비행기의 종류
        for(int k = 0; k < M; ++k) {
            int a, b;
            cin >> a >> b;
        }
        // 모든 노드를 연결하려면 간선의 개수는 노드의 개수 - 1이다.
        cout << N - 1 << '\n';
    }
    return 0;
}
