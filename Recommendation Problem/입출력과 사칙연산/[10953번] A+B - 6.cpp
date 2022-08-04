#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        string str;
        cin >> str;
        int A = str[0] - '0';
        int B = str[2] - '0';
        cout << A + B << '\n';
    }
    return 0;
}
