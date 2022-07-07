#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    for (int i = 0; i < num; ++i) {
        int A, B;
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;
}
