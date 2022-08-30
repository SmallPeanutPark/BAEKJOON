#include <bits/stdc++.h>
#define MODULAR 1000000
using namespace std;

int dp[5001]; // 길이에 따른 암호 코드 수, 인덱스가 길이를 의미

int main(void) {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    string str = "0";
    string inputstr;
    cin >> inputstr;
    str += inputstr;
    int len = str.length();
    if(str[1] == '0') {
        // 맨 첫번째가 0일 때는 암호코드를 만들 수 없음 -> 0 출력
        cout << 0;
        return 0;
    }
    dp[0] = 1;
    for (int i = 1; i < len; i++) {
        if(i == 1) {
            int cur_num = str[i] - '0';
            if(cur_num >= 1 && cur_num <= 9) {
                dp[i] = dp[i - 1] % MODULAR;
            }
        } else {
            int cur_num = str[i] - '0';
            int prev_num = str[i - 1] - '0';
            int total_num = prev_num * 10 + cur_num;
            if(cur_num == 0) {
                if(prev_num == 1 || prev_num == 2) {
                    dp[i] = dp[i - 2] % MODULAR;
                } else break;
            } else {
                if(total_num >= 11 && total_num <= 26) {
                    dp[i] = (dp[i - 1] + dp[i - 2]) % MODULAR;
                } else {
                    dp[i] = dp[i - 1] % MODULAR;
                }
            }
        }
    }
    cout << dp[len - 1];
    return 0;
}
