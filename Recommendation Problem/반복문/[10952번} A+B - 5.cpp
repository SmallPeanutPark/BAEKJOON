#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    while (true) {
        int A,B;
        cin >> A >> B; // 두정수 입력 받음
        if((A == 0) && (B == 0)) break;
        else {
            cout << A+B << '\n';
        }
    }

    return 0;
}
