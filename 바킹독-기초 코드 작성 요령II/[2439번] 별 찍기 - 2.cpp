#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    deque<char> dq;
    for (int i = 0; i < num; ++i) {
        dq.push_back(' ');
    }

    for (int i = 0; i < num; ++i) {
        dq.pop_front();
        dq.push_back('*');
        int len = dq.size();
        for (int i = 0; i < len; ++i) {
            cout << dq[i];
        }
        cout << '\n';
    }

    return 0;
}
