#include <bits/stdc++.h>
using namespace std;

long long dp[91];

long long fibo(int n) {
    if(dp[n] != -1) return dp[n];
    else {
        return dp[n] = fibo(n - 1) + fibo(n - 2);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(dp, dp + 91, -1);
    int N; 
    cin >> N;
    dp[0] = 0;
    dp[1] = 1;
    fibo(N);
    cout << dp[N];
}
