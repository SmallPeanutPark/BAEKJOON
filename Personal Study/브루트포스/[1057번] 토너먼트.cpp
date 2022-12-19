#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    int N;
    int jimin, hansu;
    cin >> N >> jimin >> hansu;
    while(jimin != hansu) {
        jimin = jimin / 2 + jimin % 2;
        hansu = hansu / 2 + hansu % 2;
        if(jimin==hansu) {
            ans += 1;
            break;
        }
        ans += 1;
    }
    cout << ans;
    return 0;
}
