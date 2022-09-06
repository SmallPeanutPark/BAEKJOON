#include <bits/stdc++.h>
using namespace std;

int dp[5001]; // 설탕이 n kg일 때 배달하는 봉지의 최소 개수
int sugar[2] = {5, 3};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    dp[0] = 0;
    dp[1] = -2;
    dp[2] = -2;
    for(int i = 3; i<= N; ++i) {
        if(i % sugar[0] != 0 && i % sugar[1] != 0) {
            dp[i] = min(dp[i - sugar[0]] + 1, dp[i - sugar[1]] + 1);
        } else if(i % sugar[0] == 0) {
            dp[i] = dp[i - sugar[0]] + 1;
        } else {
            dp[i] = dp[i - sugar[1]] + 1;
        }
    }

    cout << dp[N];
    return 0;
}
