#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> meeting;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; // 회의 수
    cin >> N;
    // 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 회의의 최대 개수
    // 중간에 중단 안되고, 한 회의가 끝나는 것과 동시에 다음 회의가 시작 될 수 있음, 시작 시간하고 끝나는 시간이 같을 수 있음
    for(int i = 0; i < N; ++i) {
        int start, end;
        cin >> start >> end;
        meeting.push_back({end, start});
    }
    // 회의가 끝나는 순서가 빠를 때 최적이다. 오름 차순 정렬해준다.
    sort(meeting.begin(), meeting.end());

    int ans = 1;
    int endtime = meeting[0].first;
    for(int i = 1; i < N; ++i) {
        if(endtime <= meeting[i].second) {
            endtime = meeting[i].first;
            ans += 1;
        }
    }

    cout << ans;

    return 0;
}
