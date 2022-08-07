#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int board[101][101];
bool visited[101][101];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, N, K;
    cin >> M >> N >> K;

    queue<pair<int, int>> q;
    for (int i = 0; i < K; ++i) {
        int leftdownx, leftdowny, rightupx, rightupy;
        cin >> leftdownx >> leftdowny >> rightupx >> rightupy;
        for (int k = leftdownx; k < rightupx; ++k) {
            for (int m = leftdowny; m < rightupy; ++m) {
                board[k][m] = 1; // 색칠한 영역임
            }
        }
    }

    vector<int> result;
    int area = 0;
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if ((visited[i][j]) || (board[i][j])) continue;
            q.push({ i,j });
            visited[i][j] = true;
            int area = 0;
            answer += 1;
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                area += 1;
                for (int k = 0; k < 4; ++k) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if ((board[nx][ny] == 1) || (visited[nx][ny])) continue;
                    q.push({ nx, ny });
                    visited[nx][ny] = true;
                }
            }
            result.push_back(area);
        }
    }
    cout << answer << '\n';
    sort(result.begin(), result.end());
    for (int element : result) {
        cout << element << ' ';
    }
    return 0;
}
