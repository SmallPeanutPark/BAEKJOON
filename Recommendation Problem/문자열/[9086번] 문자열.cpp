#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        string str;
        cin >> str;
        int len = str.length();
        cout << str[0] << str[len-1] << '\n';
    }
    return 0;
}
