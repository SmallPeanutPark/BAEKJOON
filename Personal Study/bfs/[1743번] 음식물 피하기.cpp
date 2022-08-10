#include <bits/stdc++.h>
using namespace std;

int board[101][101];
bool visited[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int answer = 0;
    int N, M, K; // 세로, 가로, 음식물쓰레기 개수
    cin >> N >> M >> K;
    for(int i = 0; i < N; ++i) {
        fill(board[i], board[i] + M, 0);
        fill(visited[i], visited[i] + M, false);
    }

    for(int i = 0; i < K; ++i) {
        int r, c;
        cin >> r >> c;
        board[r-1][c-1] = 1; // 음식물인 경우 1로 표시
    }
    
    queue<pair<int, int>> q;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(visited[i][j] || board[i][j] == 0) continue;
            // 음식물일 때만 확인
            q.push({i,j});
            visited[i][j] = true;
            int cnt = 0;
            while(!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                cnt += 1;
                for(int k = 0; k < 4; ++k) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if(visited[nx][ny] || board[nx][ny] == 0) continue;
                    q.push({nx,ny});
                    visited[nx][ny] = true;
                }
            }
            answer = max(answer, cnt);
        }
    }
    cout << answer;
}
