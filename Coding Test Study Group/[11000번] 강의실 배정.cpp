#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> lecture;
priority_queue<int, vector<int>, greater<int>> lectureroom;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int start, end;
        cin >> start >> end;
        lecture.push_back({start, end});
    }
    sort(lecture.begin(), lecture.end());

    int endtime = 0;
    for(int i = 0; i < N; ++i) 
    {
       if(lectureroom.empty()) {
            // 강의 진행 전
            lectureroom.push(lecture[i].second); // 끝나는 시간
       } else {
            // 강의 진행 중

            // 현재 강의의 끝나는 시간이 다음 강의 시작시간 보다 큰 경우
            if(lectureroom.top() > lecture[i].first) {
                // 새로운 강의실을 개설한다.
                lectureroom.push(lecture[i].second);
            } else if(lectureroom.top() <= lecture[i].first) {
                // 현재 강의의 끝나는 시간이 다음 강의 시작시간보다  작거나 같은 경우 이어서 강의 가능
                lectureroom.pop();
                lectureroom.push(lecture[i].second);
            }
       }
    }

    cout << lectureroom.size();
}
