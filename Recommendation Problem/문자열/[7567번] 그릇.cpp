#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int len = str.length();
    stack<int> st;
    st.push(str[0]);
    int height = 10;

    for(int i = 1; i < len; ++i) {
        if(st.top() == '(') {
            if(str[i] == '(') {
                // 같은 방향
                height += 5;
            } else{
                height += 10;
            }
            st.push(str[i]);
        } else {
            if(str[i] == '(') {
                // 다른 방향
                height += 10;
            } else{
                height += 5;
            }
            st.push(str[i]);
        }
    }
    cout << height;
}
