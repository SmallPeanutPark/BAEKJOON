#include <bits/stdc++.h>
using namespace std;
vector<int> gNumber;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        gNumber.emplace_back(n);
    }
    sort(gNumber.begin(), gNumber.end()); // 오름 차순 정렬
    int gNumberLen = gNumber.size();
    int start, end = 0;
    int ans = 0x7fffffff;
    for(int i = 0; i < gNumberLen; ++i) {
        start = i;
        while(end < gNumberLen) {
            if(gNumber[end] - gNumber[start] >= M) {
                ans = min(ans, gNumber[end] - gNumber[start]);
                break;
            }
            ++end;
        }
        if(end == gNumberLen) break;
    }
    cout << ans;
    return 0;
}
