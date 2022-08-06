#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        map<string, int> m;
        int maxsave = 0;
        for (int j = 0; j < N; ++j) {
            string str;
            int n;
            cin >> str >> n;
            maxsave = max(maxsave, n);
            m.insert({ str, n });
        }

        for (auto iter = m.begin(); iter != m.end(); ++iter) {
            if (iter->second == maxsave) {
                cout << iter->first << '\n';
            }
        }
    }
    return 0;
}
