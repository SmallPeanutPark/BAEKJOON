#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long A, B;
    cin >> A >> B;
    
    if (A != B) {
        cout << abs(B - A) - 1 << '\n';
        if (A < B) {
            for (long long i = A + 1; i < B; ++i) {
                cout << i << ' ';
            }
        }
        else {
            // B < A
            for (long long i = B + 1; i < A; ++i) {
                cout << i << ' ';
            }
        }
    }
    else {
        // 같을 때
        cout << 0;

    }

    return 0;
}
