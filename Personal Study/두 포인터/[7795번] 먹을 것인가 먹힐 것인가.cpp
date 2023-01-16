#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int A, B; cin >> A >> B;
        vector<int> vA; vector<int> vB;
        for(int k = 0; k < A; ++k) {
            int a; cin >> a;
            vA.emplace_back(a);
        }
        sort(vA.begin(), vA.end());

        for(int j = 0; j < B; ++j) {
            int b; cin >> b;
            vB.emplace_back(b);
        }
        sort(vB.begin(), vB.end());

        int ans = 0;
        for(int m = 0; m < A; ++m) {
            int location = lower_bound(vB.begin(), vB.end(), vA[m]) - vB.begin();
            for(int k = 0; k < location; ++k) {
                if(vB[k] < vA[m]) ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
