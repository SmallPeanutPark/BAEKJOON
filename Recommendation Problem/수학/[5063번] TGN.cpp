#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int r; int e; int c;
        cin >> r >> e >> c; 
        // r : 광고를 하지 않았을 때 수익, e : 광고를 했을 때 수익
        // c : 광고 비용
        int plusec = e - c;
        if(r < plusec) {
            cout << "advertise" << '\n';
        } else if(r == plusec) {
            cout << "does not matter" << '\n';
        } else {
            cout << "do not advertise" << '\n';
        }
    }
    return 0;
}
