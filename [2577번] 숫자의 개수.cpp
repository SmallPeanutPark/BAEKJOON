#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[10] = { 0, };
    int A, B, C;
    cin >> A >> B >> C;
    long long result = A * B * C;
    string s = to_string(result);

    int len = s.length();
    for (int i = 0; i < len; ++i) {
        arr[s[i] - '0'] += 1;
    }

    cout << arr[0] << '\n';
    for (int i = 1; i < 10; ++i) {
        cout << arr[i] << '\n';
    }
}
