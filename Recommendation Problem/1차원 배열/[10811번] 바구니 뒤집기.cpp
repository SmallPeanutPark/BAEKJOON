#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    vector<int> basket(N+1, 0);
    for(int i = 1; i <= N; ++i) {
        basket[i] = i;
    }

    for(int k = 0; k < M; ++k) {
        int i, j; cin >> i >> j;
        reverse(basket.begin() + i , basket.begin() + j + 1);
    }

    for(int i = 1; i <= N; ++i) {
        cout << basket[i] << ' ';
    }
    return 0;
}
