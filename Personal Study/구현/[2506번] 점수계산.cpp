#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int problem_cnt = 0;
    int total_sum = 0;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        if(n == 1) {
            problem_cnt += 1;
            total_sum += problem_cnt;
        } else {
            problem_cnt = 0;
        }
    }
    cout << total_sum;
    return 0;
}
