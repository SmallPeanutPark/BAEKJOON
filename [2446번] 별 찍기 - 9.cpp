#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    int final = 2 * num - 1;
    for (int i = num; i >= 1; --i) {
        // 규칙 2n
        int starvalue = (2 * i) - 1;
        int spacevalue = (final - starvalue) / 2;

        for (int k = 1; k <= spacevalue; ++k) {
            cout << ' ';
        }

        for (int j = 1; j <= starvalue; ++j) {
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = 2; i <= num; ++i) {
        int starvalue = (2 * i) - 1;
        int spacevalue = (final - starvalue) / 2;

        for (int k = 1; k <= spacevalue; ++k) {
            cout << ' ';
        }

        for (int j = 1; j <= starvalue; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
