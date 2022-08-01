#include <bits/stdc++.h>
using namespace std;
#define MAX 10007

int n;
int save[1001];

int tiling(int n) {
    for(int i = 3; i <=n; ++i) {
        save[i] = (save[i-1] + save[i-2]) % MAX;
    }

    return save[n] % MAX;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n; // 입력
    save[1] = 1;
    save[2] = 2;
    cout << tiling(n);
}
