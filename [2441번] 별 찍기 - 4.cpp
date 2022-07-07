#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    deque<char> dq;
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        dq.push_back('*');
    }

    for (int i = 0; i < num; ++i) {
        int len = dq.size();
        for (int j = 0; j < len; ++j) {
            cout << dq[j];
        }
        cout << '\n';
        dq.pop_back();
        dq.push_front(' ');
    }

    return 0;
}
