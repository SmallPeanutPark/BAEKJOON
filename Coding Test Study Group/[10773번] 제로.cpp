#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int K;
    stack<unsigned int> st;
    cin >> K; // 정수 K가 주어진다.
    for (int i = 0; i < K; ++i) {
        int n;
        cin >> n;

        if (!st.empty()) {
            if (n) {
                // 0이 아닐 때
                st.push(n);
            }
            else {
                // 0일 때 최근에 쓴 수 지운다. 
                st.pop();
            }
        }
        else {
            st.push(n);
        }
    }
    
    int ans = 0;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans;

    return 0;
}
