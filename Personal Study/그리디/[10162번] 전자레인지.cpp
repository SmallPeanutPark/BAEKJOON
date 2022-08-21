#include <bits/stdc++.h>
using namespace std;

int time_[3] = {300, 60, 10};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // A버튼 5분 B버튼 1분 C버튼 10초
    int A = 0; int B = 0; int C = 0;
    int T; cin >> T;
    for(int i = 0; i < 3; ++i) {
        if(i == 0) {
            A = T / time_[i];
            T %= time_[i];
        } else if(i == 1) {
            B = T / time_[i];
            T %= time_[i];
        } else {
            C = T / time_[i];
            T %= time_[i];
        }
    }
    if(T != 0) {
        cout << -1;
    } else {
        cout << A << ' ' << B << ' ' << C;
    }
    return 0;
}
