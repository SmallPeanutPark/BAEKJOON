#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int location;
        string str;
        cin >> location >> str;
        int len = str.length();
        string s = "";
        for(int j = 0; j < len; ++j) {
            if(j == (location -1)) {
                // pass
            } else {
                s += str[j];
            }
        }
        cout << s << '\n';
    }
    return 0;
}
