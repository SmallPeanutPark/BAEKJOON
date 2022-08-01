#include <bits/stdc++.h>
using namespace std;

#define MAX 10007
int save[1001];

int tiling(int n) {
    for(int i = 3; i <= n; ++i) {
        save[i] = (save[i-1] + (2*save[i-2])) % MAX;
    }
    return save[n] % MAX;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    save[1] = 1;
    save[2] = 3;
    cout << tiling(n);
    return 0;
}
