#include <bits/stdc++.h>
using namespace std;
vector<int> number;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M; // 수의 개수, 합을 구해야하는 횟수
    number.resize(N+1);
    int sum = 0;
    for(int i = 1; i <= N; ++i) {
        int n; cin >> n;
        sum += n;
        number[i] = sum;
    }
    for(int k = 0; k < M; ++k) {
        int st, en; cin >> st >> en;
        cout << number[en] - number[st - 1] << '\n';
    }
    return 0;
}
