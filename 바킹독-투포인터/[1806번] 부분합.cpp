#include <bits/stdc++.h>
using namespace std;
#define INF_VALUE 0x7fffffff
vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, S; cin >> N >> S;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    int end = 0;
    int gMin = INF_VALUE; // INF
    int gSum = v[0];
    for(int start = 0; start < N; ++start) {
        while(end < N && gSum < S) {
            end += 1;
            gSum += v[end];
        }
        if(end == N) break;
        gMin = min(gMin, end - start + 1);
        gSum -= v[start];
    }
    if(gMin == INF_VALUE) gMin = 0;
    cout << gMin;
    return 0;
}
