#include <bits/stdc++.h>
using namespace std;

int board[102][102];
bool visited[102][102];
int distance_[102][102];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, M; // 가로 , 세로
    cin >> N >> M;

    queue<pair<int, int>> q;
    for (int i = 1; i <= N; ++i) {
        string str;
        cin >> str;
        int len = str.length();
        for (int j = 0; j < M; ++j) {
            // 미로 셋팅
            int replace_j = j + 1;
            board[i][replace_j] = str[j] - '0';
        }
    }

    // 시작점은 (1.1) 고정
    visited[1][1] = true;
    distance_[1][1] = 0;
    q.push({ 1,1 });

    while (!q.empty()) {
        pair<int, int> curlocation = q.front();
        q.pop();
        for (int k = 0; k < 4; ++k) {
            int next_x = curlocation.first + dx[k];
            int next_y = curlocation.second + dy[k];

            if (next_x < 1 || next_x > N || next_y < 1 || next_y > M) continue;
            if ( distance_[next_x][next_y] > 0 || visited[next_x][next_y] || board[next_x][next_y] != 1) continue;
            distance_[next_x][next_y] = distance_[curlocation.first][curlocation.second] + 1;
            visited[next_x][next_y] = true;
            q.push({ next_x, next_y });

        }
    }
    cout << distance_[N][M] + 1; // 시작 위치 때문에 +1
    return 0;
}
