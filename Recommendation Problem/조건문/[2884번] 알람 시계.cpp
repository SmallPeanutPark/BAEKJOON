#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int H, M; // 시간, 분
    cin >> H >> M;
    
    if(M >= 45) {
        M -= 45;
    } 
    else {
        if(H == 0) {
            H = 24;
            H -= 1;
            M = (M + 60) - 45;
        } else {
            H -= 1;
            M = (M + 60) - 45;
        }
    }
    cout << H << ' ' << M;
}
