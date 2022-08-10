#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int board[1001][1001];
int visited[1001][1001][2];

typedef struct {
    int x;
    int y;
    int wall; // 벽을 부시지 않았는가/ 부셨는가 여부
}temp;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; // 행, 열
    cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            fill(visited[i][j], visited[i][j] + 2, 0);
            char c;
            cin >> c;
            if(c == '0') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }

    queue<temp> q;
    q.push({0, 0, 0});
    visited[0][0][0] = 1;
    while(!q.empty()) {
        temp cur = q.front();
        q.pop();  
        for(int i = 0; i < 4; ++i) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            int nwall = cur.wall;
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue; // 지도를 벗어나지는 않는지?
            if(board[nx][ny] == 1 && !nwall && !visited[nx][ny][nwall]) {
                // 벽이면서 부수지 않고 방문하지 않은 경우
                // 벽을 부신다
                q.push({nx,ny,1});
                visited[nx][ny][1] = visited[cur.x][cur.y][nwall] + 1;
            } else if(board[nx][ny] == 0 && !visited[nx][ny][nwall]) {
                // 벽이 아니고 방문하지 않은 경우
                q.push({nx,ny,nwall});
                visited[nx][ny][nwall] = visited[cur.x][cur.y][nwall] + 1;
            } else {}
        }
        if((cur.x == N - 1) && (cur.y == M -1)) {
            cout << max(visited[cur.x][cur.y][0], visited[cur.x][cur.y][1]);
            return 0;
        }
    }
    cout << -1;
    return 0;
}
