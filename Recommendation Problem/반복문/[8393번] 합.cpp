#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << sum;

    return 0;
}
