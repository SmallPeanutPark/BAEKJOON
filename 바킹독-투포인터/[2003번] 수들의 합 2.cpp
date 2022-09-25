#include <bits/stdc++.h>
using namespace std;
vector<int> gNum;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        int num; cin >> num;
        gNum.emplace_back(num);
    }
    int en = 0;
    int cnt = 0;
    int sum = gNum[0];
    for(int st = 0; st < N; ++st) {
        while(en < N && sum < M) {
            en += 1;
            sum += gNum[en];
        }
        if(en == N) break;
        if(sum == M) {
            cnt += 1;
            sum -= gNum[st];
        } else if(sum > M) {
            sum -= gNum[st];
        } else {}
    }
    cout << cnt;
    return 0;
}
