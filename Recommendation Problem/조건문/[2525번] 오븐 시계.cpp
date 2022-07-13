#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int A, B, C; // 시, 분, 필요 시간
    cin >> A >> B >> C;
    B += C;
    if(B >= 60) {
        int a = B / 60;
        int b = B % 60;
        A += a;
        B = b;
        if(A > 23) {
            A -= 24;
        }
    }
    cout << A << ' ' << B;
}
