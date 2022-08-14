#include <bits/stdc++.h>
using namespace std;

long long dp[46];

long long fibo(int num) {
    if(dp[num] >= 0) return dp[num];
    else {
        return dp[num] = fibo(num -1) + fibo(num -2);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(dp, dp + 46, -1);
    int n; cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    cout << fibo(n);
    return 0;
}
