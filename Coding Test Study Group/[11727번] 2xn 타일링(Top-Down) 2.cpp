#include <bits/stdc++.h>
using namespace std;

#define MAX 10007
int save[1001];

int tiling(int n) {
    if(save[n] != 0) return save[n] % MAX;
    else {
        return save[n] = (tiling(n-1) + (2*tiling(n-2))) % MAX;
    }
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
