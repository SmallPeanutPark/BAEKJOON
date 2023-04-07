#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int n; int K; cin >> n >> K;
        vector<int> v;
        for(int j = 0; j < n; ++j) {
            int num; cin >> num;
            v.emplace_back(num);
        }
        sort(v.begin(), v.end());
        
        int start = 0; int end = n - 1;
        map<int, int> m;
        while(start < end) {
            int num = v[start] + v[end];
            if(num > K) {
                end -= 1;
            } else {
                start += 1;
            }
            m[abs(K - num)] += 1;
        }

        for(auto iter = m.begin(); iter != m.end(); ++iter) {
            cout << iter->second << '\n';
            break;
        }
    }
    return 0;
}
