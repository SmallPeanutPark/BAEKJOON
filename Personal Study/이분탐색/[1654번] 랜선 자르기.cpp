#include <bits/stdc++.h>
using namespace std;
vector<long long> wire;
long long K, N;
void input() {
    for(int i = 0; i < K; ++i) {
        long long n; cin >> n;
        wire.emplace_back(n);
    }
}

long long divide(long long num) {
    long long count = 0;
    for(long long element : wire) {
        count += (element / num);
    }
    return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> K >> N;
    input();
    sort(wire.begin(), wire.end());

    long long left = 1;
    long long right = wire[wire.size() - 1];
    long long maxLen = 0;
    while(left <= right) {
        long long mid = (left + right) / 2;
        long long result = divide(mid);
        if(result >= N) {
            left = mid + 1;
            maxLen = max(maxLen, mid);
        } else {
            right = mid - 1;
        }
    }
    cout << maxLen;
    return 0;
}
