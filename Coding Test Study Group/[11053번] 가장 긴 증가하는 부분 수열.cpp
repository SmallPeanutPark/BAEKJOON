#include <bits/stdc++.h>
using namespace std;

int N; // 수열의 크기

int lengthOfLIS(vector<int>& A) {
    vector<int> dp(N, 1);
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i; ++j) {
            if(A[i] > A[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end()); // 원소 중 최댓값을 리턴
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    vector<int> A;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n; // 수열 입력
        A.emplace_back(n);
    }
    cout << lengthOfLIS(A);
}
