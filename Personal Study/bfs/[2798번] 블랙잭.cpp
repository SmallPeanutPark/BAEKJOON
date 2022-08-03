#include <bits/stdc++.h>
using namespace std;

int N, M; // 카드 개수, 고른 카드의 합이 M을 넘지 않아야하고 M과 최대한 가깝게 만들어야 함

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector<int> card;
    int ans = 0;
    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        card.push_back(n);
    }

    sort(card.begin(), card.end());

    vector<bool> selected(N);
    fill(selected.end() - 3, selected.end(), true);

    do {
        int sum = 0;
        for(int i = 0; i < N; ++i) {
            if(selected[i]) {
                sum += card[i];
                if(sum > M) break;
            }
        }
        if(sum <= M) ans = max(ans, sum);
    } while(next_permutation(selected.begin(), selected.end()));

    cout << ans;

    return 0;
}
