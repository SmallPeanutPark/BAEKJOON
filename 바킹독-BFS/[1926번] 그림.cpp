#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

int board[501][501];
bool visited[501][501];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    queue<pair<int, int>> q;
    int picture_cnt = 0;
    int area[1] = { 0, };

    int n; // 세로
    int m; // 가로
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int num;
            cin >> num;
            board[i][j] = num; // 0은 색칠이 안된 부분, 1은 색칠이 된 부분
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((board[i][j] != 1) || (visited[i][j] != false)) continue;
            q.push({ i,j });
            visited[i][j] = true;
            ++picture_cnt; // 그림 개수
            int area_cnt = 0;
            while (!q.empty()) {
                pair<int, int> curlocation = q.front();
                q.pop();
                area_cnt += 1;
                for (int k = 0; k < 4; ++k) {
                    int next_x = curlocation.first + dx[k];
                    int next_y = curlocation.second + dy[k];
                    if (next_x < 0 || next_x >= n || next_y < 0 || next_y >= m) continue;
                    if (visited[next_x][next_y] || board[next_x][next_y] != 1) continue;
                    visited[next_x][next_y] = true;
                    q.push({ next_x, next_y });
                }
            }
            area[0] = max(area[0], area_cnt);
        }
    }
    cout << picture_cnt << '\n';
    cout << area[0] << '\n';
}
