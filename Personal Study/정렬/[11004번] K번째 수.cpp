#include <bits/stdc++.h>
using namespace std;

int N, K;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    cin >> N >> K;
    for(int i = 0; i < N; ++i) {
        int n;
        cin >> n; 
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    for(int element : v) {
        cnt += 1;
        if(cnt == K) cout << element;
    }

    return 0;
}
