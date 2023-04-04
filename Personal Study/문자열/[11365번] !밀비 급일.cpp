#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true) {
        string str;
        getline(cin, str);
        if(str.compare("END") == 0) break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
    return 0;
}
