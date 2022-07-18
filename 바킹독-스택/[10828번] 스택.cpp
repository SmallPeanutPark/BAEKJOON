#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int N;
    cin >> N;

    stack<int> st;

    for(int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        if(s.compare("push") == 0) {
            int n;
            cin >> n;
            st.push(n);
        } else if(s.compare("top") == 0) {
            if(st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
            }
        } else if(s.compare("size") == 0) {
            if(st.empty()) {
                cout << 0 << '\n';
            } else {
                cout << st.size() << '\n';
            }
        } else if(s.compare("empty") == 0) {
            cout << st.empty() << '\n';
        } else if(s.compare("pop") == 0) {
            if(st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else {
            // nothing
        }
    }
}
