#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int N;
    cin >> N;
    for(int i = 1; i <= 9; ++i) {
        cout << N << " * " << i << " = " << N*i << '\n';
    }

    return 0;
}
