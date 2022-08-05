#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    int N; // 단어의 수
    cin >> N;
    for(int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        int len = str.length();
        stack<char> st;
        for(int j = 0; j < len; ++j) {
            if(st.empty()) {
                st.push(str[j]);
            } else {
                if(st.top()  == 'A') {
                    if(str[j] == 'A') {
                        st.pop();
                    } else {
                        st.push(str[j]);
                    }
                } else {
                    if(str[j] == 'B') {
                        st.pop();
                    } else {
                        st.push(str[j]);
                    }
                }
            }
        }

        if(st.empty()) ans += 1;
    }
    cout << ans;
    return 0;
}
