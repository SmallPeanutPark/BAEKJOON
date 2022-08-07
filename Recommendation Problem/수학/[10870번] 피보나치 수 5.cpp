#include <bits/stdc++.h>
using namespace std;

int save[21];

int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return save[n] = fibo(n - 1) + fibo(n -2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << fibo(n);
}
