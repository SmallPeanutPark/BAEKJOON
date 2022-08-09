#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int fire_time[1001][1001];
int sangguen_time[1001][1001];
int board[1001][1001];

int main(void) {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        int w, h; // 빌딩 지도의 너비, 높이
        cin >> w >> h;
        queue<pair<int, int>> fire; // 불 좌표
        queue<pair<int, int>> sangguen; // 상근이 좌표

        for(int j = 0; j < h; ++j) {
            fill(board[j], board[j] + w, 0);
            fill(fire_time[j], fire_time[j] + w, -1);
            fill(sangguen_time[j], sangguen_time[j] + w, -1);
            for(int k = 0; k < w; ++k) {
                char c;
                cin >> c;
                if(c == '#') {
                    board[j][k] = -1;
                } else if(c == '@') {
                    // 상근이 시작 위치
                    sangguen.push({j,k});
                    sangguen_time[j][k] = 0;
                } else if(c == '*') {
                    // 불 위치
                    fire.push({j,k});
                    fire_time[j][k] = 0;
                } else {
                }
            }
        }

        // 불 시간 구하기
        while(!fire.empty()) {
            pair<int, int> cur = fire.front();
            fire.pop();
            for(int j = 0; j < 4; ++j) {
                int nx = cur.first + dx[j];
                int ny = cur.second + dy[j];
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if((board[nx][ny] == -1) || (fire_time[nx][ny] != -1)) continue;
                fire.push({nx,ny});
                fire_time[nx][ny] = fire_time[cur.first][cur.second] + 1;
            }
        }

        bool issuccess = false;
        while(!sangguen.empty()) {
            pair<int, int> cur = sangguen.front();
            sangguen.pop();
            for(int j = 0; j < 4; ++j) {
                int nx = cur.first + dx[j];
                int ny = cur.second + dy[j];
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    issuccess = true;
                    cout << sangguen_time[cur.first][cur.second] + 1 << '\n';
                    break;
                }
                if((board[nx][ny] == -1) || (sangguen_time[nx][ny] != -1)) continue;
                if((fire_time[nx][ny] != -1) && fire_time[nx][ny] <= sangguen_time[cur.first][cur.second] + 1) continue;
                sangguen.push({nx,ny});
                sangguen_time[nx][ny] = sangguen_time[cur.first][cur.second] + 1;
            }
            if(issuccess) break;
        }
        if(!issuccess) cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
}
