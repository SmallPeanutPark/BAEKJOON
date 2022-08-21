#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        // A의 원소
        int n; cin >> n;
        v1.emplace_back(n);
    }
    for(int i = 0; i < N; ++i) {
        // B의 원소
        int n; cin >> n;
        v2.emplace_back(n);
    }
    sort(v1.begin(), v1.end()); // 오름 차순
    sort(v2.begin(), v2.end(), greater<int>()); // 내림차순
    int result = 0;
    for(int i = 0; i < N; ++i) {
        result += (v1[i] * v2[i]);
    }
    cout << result;
    return 0;
}
