#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        vector<int> v;
        int sum = 0;
        for(int j = 0; j < 7; ++j) {
            int n;
            cin >> n;
            if(n % 2 == 0) {
                sum += n;
                v.push_back(n);
            }
        }
        sort(v.begin(), v.end());
        cout << sum << ' ' << v[0] << '\n';
    }
    return 0;
}
