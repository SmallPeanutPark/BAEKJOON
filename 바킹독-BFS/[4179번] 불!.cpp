#include <bits/stdc++.h>
using namespace std;

string board[1001]; // 미로

int fire_time[1001][1001]; // 불이 번지는 시간
int jihun_time[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int R,C; //R : 미로 행의 개수, C: 열의 개수
    cin >> R >> C;
    queue<pair<int, int>> jihun;
    queue<pair<int, int>> fire;
    for(int i = 0; i < R; ++i) {
        cin >> board[i];
    }
    
    for (int i = 0; i < R; ++i) {
        fill(fire_time[i], fire_time[i] + 1001, -1);
        fill(jihun_time[i], jihun_time[i] + 1001, -1);
    }

    for(int i = 0; i < R; ++i) {
        for(int j = 0; j < C; ++j) {
            if(board[i][j] == 'J') {
                jihun.push({i,j});
                jihun_time[i][j] = 0;
            }

            if(board[i][j] == 'F') {
                fire.push({i, j});
                fire_time[i][j] = 0;
            }
        }
    }

    while(!fire.empty()) {
        pair<int, int> fire_cur = fire.front();
        fire.pop();
        for(int i = 0; i < 4; ++i) {
            int next_fireX = fire_cur.first + dx[i];
            int next_fireY = fire_cur.second + dy[i];
 
            if(next_fireX < 0 || next_fireX >= R || next_fireY < 0 || next_fireY >= C) continue;
            if((fire_time[next_fireX][next_fireY] >= 0) || (board[next_fireX][next_fireY] == '#'))continue;
            fire_time[next_fireX][next_fireY] = fire_time[fire_cur.first][fire_cur.second] + 1;
            fire.push({next_fireX, next_fireY});
        }
    }

    while(!jihun.empty()) {
        pair<int, int> jihun_cur = jihun.front();
        jihun.pop();
        for(int i = 0; i < 4; ++i) {
            int next_jihunX = jihun_cur.first + dx[i];
            int next_jihunY = jihun_cur.second + dy[i];
            if(next_jihunX < 0 || next_jihunX >= R || next_jihunY < 0 || next_jihunY >= C) {
                cout << jihun_time[jihun_cur.first][jihun_cur.second] + 1;
                return 0;
            }
            if((jihun_time[next_jihunX][next_jihunY] >= 0) || (board[next_jihunX][next_jihunY] == '#')) continue;
            if((fire_time[next_jihunX][next_jihunY] != -1) && (fire_time[next_jihunX][next_jihunY] <= jihun_time[jihun_cur.first][jihun_cur.second] + 1)) continue;
            jihun_time[next_jihunX][next_jihunY] = jihun_time[jihun_cur.first][jihun_cur.second] + 1;
            jihun.push({next_jihunX, next_jihunY});
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
