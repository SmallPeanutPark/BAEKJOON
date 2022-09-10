#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

void initialize() {
    for(int i = 0; i < 1001; ++i) {
        fill(dp[i], dp[i] + 1001, 0);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    initialize();
    string temp1 = " "; string temp2 = " ";
    string str1, str2; cin >> str1 >> str2;
    temp1 += str1; // 기준 문자열
    temp2 += str2; // 비교 문자열

    int temp1len = temp1.length();
    int temp2len = temp2.length();
    for(int i = 1; i < temp1len; ++i) {
        for(int j = 1; j < temp2len; ++j) {
            if(temp1[i] != temp2[j]) {
                // 다른 문자열 일 때
                dp[i][j] = max(dp[i - 1][j], dp[i][j -1]);
            } else {
                // 같은 문자열일 때
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
    }
    cout << dp[temp1len - 1][temp2len - 1] << '\n';

    int i = temp1len - 1;
    int j = temp2len - 1;
    stack<int> st;
    while(dp[i][j] != 0) {
        if(dp[i][j] == dp[i -1][j]) {
            i -= 1;
        } else if(dp[i][j] == dp[i][j - 1]) {
            j -= 1;
        } else if(dp[i][j] -1 == dp[i -1][j -1]) {
            st.push(i);
            i -= 1;
            j -= 1;
        }
    }

    while(!st.empty()) {
        cout << temp1[st.top()];
        st.pop();
    }
    return 0;
}
