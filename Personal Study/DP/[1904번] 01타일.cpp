#include <bits/stdc++.h>
#define MODULAR 15746

using namespace std;
using ull = unsigned long long;

vector<ull> dp;

ull binarySequence(int n) {
    if(dp[n] != 0) return dp[n];
    else {
        return dp[n] = (binarySequence(n -1) + binarySequence(n -2)) % MODULAR;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; 
    cin >> N;
    dp.resize(N + 1);
    dp[1] = 1; dp[2] = 2;
    binarySequence(N);
    cout << dp[N];
    return 0;
}
