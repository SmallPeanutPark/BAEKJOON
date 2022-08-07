#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str; 
    while(getline(cin, str)) {
        if((str[0] == '.') && (str.length() == 1)) break;
        int len = str.length();
        stack<char> st;
        for(int i = 0; i < len; ++i) {
            if((str[i] == '(') || (str[i] == '[')) {
                st.push(str[i]);
            } else if(str[i] == ']') {
                if(!st.empty()) {
                    if(st.top() == '[') {
                        st.pop();
                    } else {
                        st.push(str[i]);
                    }
                } else {
                    st.push(str[i]);
                }
            } else if(str[i] == ')') {
                if(!st.empty()) {
                    if(st.top() == '(') {
                        st.pop();
                    } else {
                        st.push(str[i]);
                    }
                } else {
                    st.push(str[i]);
                }
            } else {
                // nothing
            }
        }
        if(st.empty()) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    return 0;
}
