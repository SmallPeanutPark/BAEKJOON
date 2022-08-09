#include <bits/stdc++.h>
using namespace std;

string board[51];

int hedgehog_time[51][51];
int water_time[51][51];

int dx[4] = {1, 0, -1 , 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int R, C;
    cin >> R >> C;
    queue<pair<int, int>> hedgehog;
    queue<pair<int, int>> water;

    int beaverX = 0; int beaverY = 0;
    for(int i = 0; i < R; ++i) {
        cin >> board[i];
        fill(hedgehog_time[i], hedgehog_time[i] + C, -1);
        fill(water_time[i], water_time[i] + C, -1);
        for(int j = 0; j < C; ++j) {
            if(board[i][j] == 'S') {
                hedgehog.push({i,j});
                hedgehog_time[i][j] = 0;
            } else if(board[i][j] == '*') {
                water.push({i,j});
                water_time[i][j] = 0;
            } else if(board[i][j] == 'D') {
                beaverX = i;
                beaverY = j;
            } else {}
        }
    }

    // 물 시간 구하기
    while(!water.empty()) {
        pair<int, int> cur = water.front();
        water.pop();
        for(int i = 0; i < 4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if((board[nx][ny] == 'X') || (water_time[nx][ny] != -1)) continue;
            if ((nx == beaverX) && (ny == beaverY)) continue;
            water.push({nx,ny});
            water_time[nx][ny] = water_time[cur.first][cur.second] + 1;
        }
    }

    // 고슴 도치 시간 구하기
    bool issuccess = false;
    while(!hedgehog.empty()) {
        pair<int, int> cur = hedgehog.front();
        hedgehog.pop();
        for(int i = 0; i < 4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if((board[nx][ny] == 'X') || (hedgehog_time[nx][ny] != -1)) continue;
            if((water_time[nx][ny] != -1) && (water_time[nx][ny] <= hedgehog_time[cur.first][cur.second] + 1)) continue;
            hedgehog.push({nx, ny});
            hedgehog_time[nx][ny] = hedgehog_time[cur.first][cur.second] + 1;
        }
    }

    if(hedgehog_time[beaverX][beaverY] != -1) {
        cout << hedgehog_time[beaverX][beaverY];
    } else {
        cout << "KAKTUS";
    }
    return 0;
}
