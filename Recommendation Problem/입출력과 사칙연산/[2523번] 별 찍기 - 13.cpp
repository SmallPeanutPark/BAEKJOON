#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int linecnt = (2 * N) - 1 ;
    int cnt = 0;
    bool flag = false;
    while(linecnt--) {
        if(!flag)
            cnt += 1;
        else 
            cnt -= 1;
        
        if(cnt == N) flag = true;
        for(int i = 0; i < cnt; ++i) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
