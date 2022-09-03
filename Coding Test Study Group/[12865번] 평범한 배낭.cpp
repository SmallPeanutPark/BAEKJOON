#include <bits/stdc++.h>
using namespace std;

int dp[101][100001]; // 물건 개수, 가방 무게

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K; cin >> N >> K; // 물품의 수, 준서가 버틸 수 있는 무게
    vector<pair<int, int>> v;
    v.emplace_back(make_pair(0, 0)); // 갯수 맞추려고 함
    for(int i = 1; i <= N; ++i) {
        int W, V; cin >> W >> V;
        v.emplace_back(make_pair(W, V)); // 물건의 무게, 물건의 가치
    }

    for(int i = 1; i <= N; ++i) { // 물건의 개수
        for(int j = 1; j <= K; ++j) { // 가방 무게
            if(j >= v[i].first) {
                dp[i][j] = max(dp[i - 1][j], dp[i -1][j - v[i].first] + v[i].second);
            } else {
                dp[i][j] = dp[i -1][j];
            }
        }
    }
    cout << dp[N][K];
    return 0;
}
