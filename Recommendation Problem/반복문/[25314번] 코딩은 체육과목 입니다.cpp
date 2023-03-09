#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N; // N은 4의 배수
    string s = "";
    for(int i = 0; i < N/4; ++i) {
        s += "long ";
    }
    s += "int";
    cout << s << '\n';
    return 0;
}
