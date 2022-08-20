#include <bits/stdc++.h>
using namespace std;

vector<int> b;
vector<int> increasedp;
vector<int> decreasedp;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    increasedp.resize(N, 1);
    decreasedp.resize(N, 1);

    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        b.emplace_back(n); // 바이토닉 수열 입력 받음
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i; ++j) {
            if(b[i] > b[j]) {
                increasedp[i] = max(increasedp[i], increasedp[j] + 1);
            }
        }
    }
    reverse(b.begin(), b.end());
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i; ++j) {
            if(b[i] > b[j]) {
                decreasedp[i] = max(decreasedp[i], decreasedp[j] + 1);
            }
        }
    }
    reverse(decreasedp.begin(), decreasedp.end());
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        ans = max(ans, increasedp[i] + decreasedp[i]);
    }
    cout << ans - 1;
    return 0;
}
