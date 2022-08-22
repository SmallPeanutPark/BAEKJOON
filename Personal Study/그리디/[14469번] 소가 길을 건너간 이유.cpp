#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int ftime, ltime;
        cin >> ftime >> ltime; // 도착 시간, 검문 시간
        arr.emplace_back(make_pair(ftime, ltime));
    }

    sort(arr.begin(), arr.end()); // 도착 시간을 오름 차순으로 정렬
    int cur_Time = 0;
    for(int i = 0; i < N; ++i) {
       if(cur_Time <= arr[i].first) {
            cur_Time += (arr[i].first - cur_Time);
            cur_Time += (arr[i].second);
       } else {
            // 미리 도착하여 대기하고 있는 경우
            cur_Time += arr[i].second;
       }
    }
    cout << cur_Time;
    return 0;
}
