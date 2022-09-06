#include <bits/stdc++.h>
using namespace std;

int dp[100001]; // 거스름돈 동전의 최소 개수
int coin[2] = {5, 2};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    dp[0] = 0;
    if(n == 1 || n == 3) {
        cout << -1;
        return 0;
    }

    for(int i = 2; i <= n; ++i) {
        if(i % coin[0] != 0 && i % coin[1] != 0) {
            dp[i] = min(dp[i - coin[0]] + 1, dp[i - coin[1]] + 1);
        } else if(i % coin[0] == 0 && i % coin[1] == 0) {
            dp[i] = min(dp[i - coin[0]] + 1, dp[i - coin[1]] + 1);
        } else if(i % coin[0] == 0) {
            dp[i] = dp[i - coin[0]] + 1;
        } else {
            dp[i] = dp[i - coin[1]] + 1;
        } 
    }
    cout << dp[n];
    return 0;
}
