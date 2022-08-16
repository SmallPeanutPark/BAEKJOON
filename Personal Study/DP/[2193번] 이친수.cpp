#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull dp[91];

ull searchPinaryNumber(ull n) {
    if(dp[n] != 0) return dp[n];
    else {
        return dp[n] = searchPinaryNumber(n - 1) + searchPinaryNumber(n -2);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull N; // N자리 
    cin >> N;
    fill(dp, dp + 91, 0);
    dp[1] = 1;
    dp[2] = 1;
    cout << searchPinaryNumber(N);
    return 0;
}
