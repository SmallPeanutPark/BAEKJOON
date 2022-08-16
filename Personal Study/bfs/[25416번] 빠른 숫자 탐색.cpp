#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[5][5];
int dis[5][5];
int r, c; // 학생의 위치

void bfs() {
    queue<pair<int, int>> q;
    q.push({r, c});
    dis[r][c] = 0;
    while(!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
            if((board[nx][ny] == -1) ||  (dis[nx][ny] > -1)) continue;
            q.push({nx, ny});
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int oneX, oneY;
    for(int i = 0; i < 5; ++i) {
        fill(dis[i], dis[i] + 5, -1);
        for(int j = 0; j < 5; ++j) {
            cin >> board[i][j];
            if(board[i][j] == 1) {
                // 1의 위치
                oneX = i;
                oneY = j;
            }
        }
    }
    cin >> r >> c;
    bfs();
    cout << dis[oneX][oneY];
    return 0;
}
