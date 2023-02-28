#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void input(int N) {
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end());
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    
    int gMin = 0x7fffffff;
    vector<int> answer(2, 0);
    for(int start = 0; start < N; ++start) {
        int ll = lower_bound(v.begin() + start + 1, v.end(), -v[start]) - v.begin();
        for(int end = ll - 1; end <= ll; ++end) {
            if((end >= N) || (end == start)) continue;
            int result = abs(v[start] + v[end]);
            if(gMin > result) {
                gMin = min(gMin, result);
                answer[0] = v[start];
                answer[1] = v[end];
            }
        }
    }

    cout << answer[0] + answer[1];
    return 0;
}
