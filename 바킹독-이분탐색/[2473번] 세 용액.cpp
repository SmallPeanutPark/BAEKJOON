#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
priority_queue<long long, vector<long long>, greater<long long>> pq;

void input(int N) {
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end());
}

void mix(int N) {
    long long minNum = LONG_LONG_MAX;
    for(int i = 0; i < N; ++i) {
        for(int j = i + 1; j < N; ++j) {
            int end = j + 1;
            int ll = lower_bound(v.begin() + end, v.end(), -(v[i] + v[j])) - v.begin();
            for(int k = ll - 1; k <= ll; ++k) {
                if((k >= N) || (k == i) || (k == j)) continue;
                long long result = abs(v[i] + v[j] + v[k]);
                if(minNum > result) {
                    minNum = min(minNum, result);
                    if(!pq.empty()) {
                        priority_queue<long long, vector<long long>, greater<long long>> tempq;
                        pq.swap(tempq);
                    }
                    pq.push(v[i]);
                    pq.push(v[j]);
                    pq.push(v[k]);
                }
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    mix(N);
    while(!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    return 0;
}
