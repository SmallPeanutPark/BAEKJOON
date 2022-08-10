#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

int main(void) {
    int w, h;
    while(cin >> w >> h) {
        if((w == 0) && (h == 0)) break;
        int board[51][51];
        bool visited[51][51];
        for(int i = 0; i < h; ++i) {
            fill(visited[i], visited[i] + 51, false);
            for(int j = 0; j < w; ++j) {
                int n;
                cin >> n;
                board[i][j] = n;
            }
        }

        queue<pair<int, int>> q;
        int answer = 0;
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                if(board[i][j] == 0 || visited[i][j]) continue;
                q.push({i,j});
                visited[i][j] = true;
                answer += 1;
                while(!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for(int k = 0; k < 8; ++k) {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                        if((board[nx][ny] == 0) || (visited[nx][ny])) continue;
                        q.push({nx, ny});
                        visited[nx][ny] = true;
                    }
                }
            }
        }
        cout << answer << '\n';
    }
}
