#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    while(cin >> str) {
        if(stoi(str) == 0) break;
        string tempstr = str;
        reverse(tempstr.begin(), tempstr.end());
        if(str.compare(tempstr) == 0) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    return 0;
}
