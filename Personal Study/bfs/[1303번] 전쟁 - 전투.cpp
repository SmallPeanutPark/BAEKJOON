#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int board[101][101];
bool q1visited[101][101];
bool q2visited[101][101];

int main(void) {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            char c;
            cin >> c;
            if (c == 'W') board[i][j] = 1; // 아군 1로 표시
            else board[i][j] = 0; // 적군 0으로 표시
        }
    }

    // 아군 BFS
    queue<pair<int, int>> q1;
    int q1sum = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (q1visited[i][j] || board[i][j] == 0) continue;
            int ans = 0;
            q1.push({ i,j });
            q1visited[i][j] = true;
            while (!q1.empty()) {
                pair<int, int> cur = q1.front();
                q1.pop();
                ans += 1;
                for (int k = 0; k < 4; ++k) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                    if ((q1visited[nx][ny] == true) || (board[nx][ny] == 0)) continue;
                    q1.push({ nx, ny });
                    q1visited[nx][ny] = true;
                }
            }
            q1sum += (ans * ans);
        }
    }

    // 적군 BFS
    queue<pair<int, int>> q2;
    int q2sum = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (q2visited[i][j] || board[i][j] == 1) continue;
            int ans = 0;
            q2.push({ i,j });
            q2visited[i][j] = true;
            while (!q2.empty()) {
                pair<int, int> cur = q2.front();
                q2.pop();
                ans += 1;
                for (int k = 0; k < 4; ++k) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                    if ((q2visited[nx][ny] == true) || (board[nx][ny] == 1)) continue;
                    q2.push({ nx, ny });
                    q2visited[nx][ny] = true;
                }
            }
            q2sum += (ans * ans);
        }
    }
    cout << q1sum << ' ' << q2sum;
}
