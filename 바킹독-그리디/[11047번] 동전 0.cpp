#include <bits/stdc++.h>
using namespace std;

vector<int> coin;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K; cin >> N >> K; // 동전 종류, 가치
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        // 동전의 가치
        coin.emplace_back(n);
    }
    sort(coin.begin(), coin.end(), greater<int>()); // 내림 차순 정렬
    int result = 0;
    for(int i = 0; i < N; ++i) {
        result += (K / coin[i]);
        K %= coin[i];
    }
    cout << result;
    return 0;
}
