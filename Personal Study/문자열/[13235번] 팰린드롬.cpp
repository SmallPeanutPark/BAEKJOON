#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    string tempstr = str;
    reverse(tempstr.begin(), tempstr.end());
    if(str.compare(tempstr) == 0) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
