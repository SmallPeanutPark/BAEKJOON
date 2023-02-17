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

long long mix(int N) {
    long long ans = 0;
    for(int first = 0; first < N; ++first) {
        for(int second = first + 1; second < N; ++second) {
            int end = second + 1;
            int lower_location = lower_bound(v.begin() + end, v.end(), -(v[first] + v[second])) - v.begin();
            int upper_location = upper_bound(v.begin() + end, v.end(), -(v[first] + v[second])) - v.begin();
            if(lower_location < N) {
                ans += (upper_location - lower_location);
            }
        }
    }
    return ans;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    // 세명이 팀이고 세명을 적절히 섞어서 0이 되어야함
    long long answer = mix(N);
    cout << answer;
    return 0;
}
