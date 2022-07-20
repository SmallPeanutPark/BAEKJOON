#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int len = s.length();
        stack<char> st;
        for(int j = 0; j < len; ++j) {
            if(!st.empty()) {
                if(st.top() == '(') {
                    if(s[j] == ')')
                        st.pop();
                    else
                        st.push(s[j]);
                } else {
                    st.push(s[j]);
                }
            } else {
                st.push(s[j]);
            }
        }

        if(!st.empty()) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
