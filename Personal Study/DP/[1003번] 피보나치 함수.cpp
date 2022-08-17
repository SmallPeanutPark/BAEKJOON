#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll zerodp[41]; ll onedp[41];
    zerodp[0] = 1; zerodp[1] = 0;
    onedp[0] = 0; onedp[1] = 1;
    for(int i = 2; i <= 40; ++i) {
        zerodp[i] = zerodp[i -1] + zerodp[i - 2];
        onedp[i] = onedp[i - 1] + onedp[i - 2];
    }
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int n; cin >> n;
        cout << zerodp[n] << ' ' << onedp[n] << '\n';
    }
}
