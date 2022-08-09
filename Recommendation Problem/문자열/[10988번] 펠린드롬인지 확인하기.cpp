#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string str;
    cin >> str;
    int len = str.length();
    string copystr;
    for(int i = len -1; i >=0; --i) {
        copystr += str[i];
    }
    if(str.compare(copystr) == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}
