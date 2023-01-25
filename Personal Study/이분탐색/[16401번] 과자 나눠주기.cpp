#include <bits/stdc++.h>

using namespace std;
vector<long long> snack;

void input(int N) {
    for (int i = 0; i < N; ++i) {
        long long n; cin >> n;
        snack.emplace_back(n);
    }
}

long long cal(long long num) {
    long long ans = 0;
    for (long long element : snack) {
        ans += (element / num);
    }
    return ans;
}

long long binarysearch(int M) {
    long long start = 1;
    long long end = snack[snack.size() - 1];
    long long maxLen = 0;
    while (start <= end) {
        long long mid = (start + end) / 2;
        long long result = cal(mid);
        if (result >= M) {
            maxLen = max(maxLen, mid);
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return maxLen;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, N; cin >> M >> N; // 조카의 수, 과자의 수
    input(N);
    sort(snack.begin(), snack.end()); // 오름 차순 정렬
    long long answer = binarysearch(M);
    cout << answer;
    return 0;
}
