#include <iostream>
#include <algorithm>
using namespace std;

int dp[12];

int plusNumber(int n) {
    if(dp[n] != -1) return dp[n];

    return dp[n] = plusNumber(n - 1) + plusNumber(n - 2) + plusNumber(n - 3);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    fill(dp, dp + 12, -1);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int number;
        cin >> number;
        cout << plusNumber(number) << '\n';
    }
    return 0;
}
