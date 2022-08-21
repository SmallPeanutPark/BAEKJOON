#include <bits/stdc++.h>
using namespace std;

vector<int> atmtime;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int time; cin >> time;
        atmtime.emplace_back(time);
    }
    sort(atmtime.begin(), atmtime.end()); // 오름 차순 정렬
    // atm을 사용하는 시간이 적을 수록 최솟값
    int result = 0;
    int beforetime = 0;
    for(int i = 0; i < N; ++i) {
        result +=  (beforetime + atmtime[i]);
        beforetime += atmtime[i];
    }
    cout << result;
    return 0;
}
