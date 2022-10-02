#include <bits/stdc++.h>
using namespace std;
vector<int> total;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    total.resize(N + 1, 0);
    int sum = 0;
    for(int i = 1; i <= N; ++i) {
        int n; cin >> n;
        sum += n;
        total[i] = sum;
    }
    int M; cin >> M;
    for(int i = 0; i < M; ++i) {
        int st, en; cin >> st >> en;
        cout << total[en] - total[st - 1] << '\n';
    }
    return 0;
}
