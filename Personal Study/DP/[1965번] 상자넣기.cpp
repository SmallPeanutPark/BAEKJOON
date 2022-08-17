#include <bits/stdc++.h>
using namespace std;

int N; // 수열의 크기

int lengthOfLIS(vector<int>& A) {
    vector<int> dp(N, 1); // 최소 1의 길이를 가질 수 있으므로 1로 초기화
    // dp vector는 A[i]를 마지막 값으로 가지는 최장 증가 부분 수열의 길이를 의미
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i; ++j) {
            // 현재 값이 이전 값보다 커야하고, 
            // 현재 값을 마지막으로 가지는 가장 긴 증가 수열의 길이가 이전 값으로 가지는 가장 긴 증가 수열의 길이보다 작다면
            if(A[i] > A[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1; // 증가
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
