#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int N; cin >> N;
    int M; cin >> M;
    vector<int> v;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end());
    int start, end = 0;
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        start = i;
        end = i + 1;
        while(end < N) {
            if(v[start] + v[end] == M) ans += 1;
            end += 1; 
        }
    }
    cout << ans;
    return 0;
}
