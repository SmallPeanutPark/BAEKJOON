#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int C, D; cin >> C >> D;
        int ans = 0;
        while(C > 0) {
            C -= D;
            ans += 1;
        }
        cout << ans << '\n';
    }
}
