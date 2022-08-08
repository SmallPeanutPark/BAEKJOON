#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        vector<int> v;
        for(int j = 0; j < 10; ++j) {
            int n;
            cin >> n;
            v.push_back(n);
        }
        sort(v.begin(), v.end());
        cout << v[7] << '\n';
    }
    return 0;
}
