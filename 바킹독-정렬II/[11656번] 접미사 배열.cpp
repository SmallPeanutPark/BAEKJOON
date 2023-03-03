#include <bits/stdc++.h>
using namespace std;
string str;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> str;
    int len = str.length();
    vector<string> vs;
    for(int i  =  0; i < len; ++i) {
        vs.emplace_back(str.begin() + i, str.end());
    }
    sort(vs.begin(), vs.end());
    for(string element : vs) {
        cout << element << '\n';
    }
    return 0;
}
