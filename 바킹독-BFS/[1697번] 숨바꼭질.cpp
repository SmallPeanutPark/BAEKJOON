#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;


int walk_teleport[3] = { -1, 1, 2 }; // x -1 , x+1, 2*x
int cal_distance[100001]; // 거리 저장할 배열
bool visited[100001]; // 방문 여부 확인

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int subin, brother; // 수빈이, 동생
    cin >> subin >> brother;
    queue<int> q;
    q.push(subin);
    cal_distance[subin] = 0; // 현재 위치
    visited[subin] = true;
    while (!q.empty()) {
        int curX = q.front();
        q.pop();
        for (int i = 0; i < 3; ++i) {
            int nextX = 0;
            if (i != 2) nextX = curX + walk_teleport[i];
            else nextX = curX * i;
            if (nextX < 0 || nextX > 100000) continue;
            if ((cal_distance[nextX] != 0) || (visited[nextX])) continue;
            cal_distance[nextX] = cal_distance[curX] + 1;
            visited[nextX] = true;
            q.push(nextX);
        }
    }
    cout << cal_distance[brother];
}
