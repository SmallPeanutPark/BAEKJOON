#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    sort(s.begin(), s.end(), greater<char>());
    if((s[s.length() - 1] - '0') != 0) {
        cout << -1;
    } else {
        // find ok
        long long value = 0;
        string str;
        for(char element : s) {
            value += (element - '0');
            str += element;
        }

        if(value % 3 == 0) {
            cout << str;
        } else {
            cout << -1;
        }
    }
    return 0;
}
