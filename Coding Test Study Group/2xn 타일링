#include <bits/stdc++.h>
using namespace std;
#define MAX 10007

int n;
int save[1001];

int tiling(int n) {
    if (save[n] != 0) return (save[n]) % MAX;
    else {
        return save[n] = (tiling(n-1) + tiling(n-2)) % MAX;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n; // 입력
    save[1] = 1;
    save[2] = 2;
    cout << tiling(n);
}
