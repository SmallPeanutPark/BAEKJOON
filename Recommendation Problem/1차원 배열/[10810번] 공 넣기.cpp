#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    vector<int> basket(N + 1, 0);
    for(int l = 0; l < M; ++l) {
        int i, j, k; cin >> i >> j >> k;
        for(int m = i; m <= j; ++m) {
            basket[m] = k;   
        }
    }

    for(int i = 1; i <= N; ++i) {
        cout << basket[i] << ' ';
    }
    return 0;
}
