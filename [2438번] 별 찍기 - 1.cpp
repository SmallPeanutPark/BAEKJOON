#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int num;
    cin >> num;

    string s;
    for(int i = 0; i < num; ++i) {
        s += '*';
        cout << s << '\n';
    }

    return 0;
}
