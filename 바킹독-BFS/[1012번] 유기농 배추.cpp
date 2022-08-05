#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int M, N, K; // 가로, 세로, 배추가 심어져 있는 위치 개수
        cin >> M >> N >> K;
        int ans = 0;
        int field[51][51];
        bool visited[51][51];
        // 초기 세팅
        for (int idx = 0; idx < 51; ++idx) {
            fill(field[idx], field[idx] + 51, 0);
            fill(visited[idx], visited[idx] + 51, false);
        }

        for (int j = 0; j < K; ++j) {
            // 배추가 심어져 있는 위치를 입력
            int x, y;
            cin >> x >> y;
            field[x][y] = 1;
        }

        // 시작 위치를 찾는다.
        queue<pair<int, int>> q;
        for (int l = 0; l < M; ++l) {
            for (int ll = 0; ll < N; ++ll) {
                if ((field[l][ll] == 0) || (visited[l][ll])) continue;
                // 시작 위치 찾음(배추가 있는 영역이라는 뜻)
                q.push({ l, ll });
                visited[l][ll] = true;
                ans += 1;
                while (!q.empty()) {
                    pair<int, int> curlocation = q.front();
                    q.pop();
                    for (int k = 0; k < 4; ++k) {
                        int nx = curlocation.first + dx[k];
                        int ny = curlocation.second + dy[k];
                        if (nx < 0 || nx >= M || ny < 0 || ny >= N)  continue;
                        if ((field[nx][ny] == 0) || (visited[nx][ny])) continue;
                        q.push({ nx, ny });
                        visited[nx][ny] = true;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}
