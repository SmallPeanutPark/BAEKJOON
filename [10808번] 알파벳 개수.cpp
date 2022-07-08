#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[26] = { 0, };

    string s;
    cin >> s;

    int len = s.length();
    for (int i = 0; i < len; ++i) {
        arr[s[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; ++i) {
        cout << arr[i] << ' ';
    }
}
