#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int val = 1;
    while(true) {
        if(N != 0)
        {
            val *= N;
            N--;
        }

        if(N == 0) break;
    }
    cout << val;
    return 0;
}
