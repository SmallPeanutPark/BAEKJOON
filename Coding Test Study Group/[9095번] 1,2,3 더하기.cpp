#include <bits/stdc++.h>
using namespace std;

int save[12];

int plusnumber(int n) {
    if(save[n] != -1) return save[n];
    else {
        return save[n] = plusnumber(n-1) + plusnumber(n-2) + plusnumber(n-3);
    }
}

int main(void) {
    fill(save, save + 12, -1);
    save[1] = 1;
    save[2] = 2;
    save[3] = 4;
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int n; cin >> n;
        cout << plusnumber(n) << '\n';
    }
    return 0;
}
