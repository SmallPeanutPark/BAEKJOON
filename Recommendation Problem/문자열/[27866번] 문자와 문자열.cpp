#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = " ";
    string inputStr; cin >> inputStr;
    s += inputStr;
    int location; cin >> location;
    cout << s[location];
    return 0;
}
