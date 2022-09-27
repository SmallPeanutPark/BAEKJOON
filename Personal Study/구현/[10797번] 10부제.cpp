#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int gCount = 0;
    for(int i = 0; i < 5; ++i) {
        int n; cin >> n;
        if(n == N) gCount += 1;
    }
    cout << gCount;
    return 0;
}
