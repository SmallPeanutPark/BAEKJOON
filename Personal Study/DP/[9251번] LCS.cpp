#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
string str1, str2;

void input() {
    str1 = " ";
    str2 = " ";
    string temp1, temp2;
    cin >> temp1 >> temp2;
    str1 += temp1;
    str2 += temp2;
}

void dpinitialize() {
    // dp 배열 0으로 초기화
    for(int i = 0; i < 1001; ++i) {
        fill(dp[i], dp[i] + 1001, 0);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    input();
    dpinitialize();
    int str1len = str1.length();
    int str2len = str2.length();

    for(int i = 1; i < str1len; ++i) {
        for(int j = 1; j < str2len; ++j) {
            if(str1[i] == str2[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << dp[str1len - 1][str2len - 1];
    return 0;
}
