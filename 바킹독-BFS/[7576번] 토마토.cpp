#include <bits/stdc++.h>
using namespace std;

int board[1001][1001];
int distance_[1001][1001]; // 익지 않은 토마토 구분
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    queue<pair<int, int>> q;

    int M, N; // 가로, 세로
    cin >> M >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 1) {
                // 익은 토마토 상하좌우로 익을 수 있음, 시작점을 큐에 저장
                q.push({ i,j });
            }

            if (board[i][j] == 0) {
                distance_[i][j] = -1; // 익지 않은 토마토
            }
        }
    }

    while (!q.empty()) {
        pair<int, int> curlocation = q.front(); // 익은 토마토
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nextX = curlocation.first + dx[i];
            int nextY = curlocation.second + dy[i];
            if (nextX < 0 || nextX >= N || nextY < 0 || nextY >= M) continue;
            if (distance_[nextX][nextY] >= 0) continue; // 익은 토마토 또는 없는 토마토일 때 예외처리
            distance_[nextX][nextY] = distance_[curlocation.first][curlocation.second] + 1; // 안익은 토마토에서 익은 토마토 변신
            q.push({ nextX, nextY });
        }
    }

    int result = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (distance_[i][j] == -1) {
                // 익지 않는 토마토가 있음
                cout << -1;
                return 0;
            }
            result = max(result, distance_[i][j]);
        }
    }
    cout << result;
    return 0;
}
