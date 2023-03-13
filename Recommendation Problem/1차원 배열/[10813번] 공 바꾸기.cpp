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

    for(int m = 0; m < M; ++m) {
        int i, j; cin >> i >> j;
        int havei = basket[i];
        int havej = basket[j];
        basket[i] = havej;
        basket[j] = havei;
    }
    
    for(int k = 1; k <= N; ++k) {
        cout << basket[k] << ' ';
    }
    return 0;
}
