#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int linecnt = (2 * N) - 1;
    int spacecnt = N -1;
    int starcnt = 0;
    bool flag = false;
    while(linecnt--) {
        if(flag) {
            starcnt -= 1;
            spacecnt += 1;
        }
        else starcnt += 1;

        for(int i = 0; i < spacecnt; ++i) {
            cout << ' ';
        }
        if(!flag) spacecnt -= 1;
        for(int j = 0; j < starcnt; ++j) {
            cout << '*';
        }
        cout << '\n';

        if(starcnt == N) {
            flag = true;
            spacecnt = 0;
        }

    }
    return 0;
}
