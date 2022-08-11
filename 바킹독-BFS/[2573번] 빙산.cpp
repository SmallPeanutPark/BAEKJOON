#include <bits/stdc++.h>
using namespace std;

int N, M;
int maxelement;
int board[301][301];
int copymap[301][301];
bool visited[301][301];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void initializevisited() {
    // 방문 배열 초기화
    for(int i = 0; i < N; ++i) {
        fill(visited[i], visited[i] + 301, false);
    }
}

void inputkeyboard() {
    // 키보드 입력
    maxelement = 0;
    cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if(board[i][j] > 0) maxelement += 1;
        }
    }
}

void copyMap() {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            copymap[i][j] = board[i][j];
        }
    }
}

void meltingIce() {
    copyMap();
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(copymap[i][j] > 0) {
                int zerocnt = 0;
                for(int k = 0; k < 4; ++k) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if(copymap[nx][ny] > 0) continue;
                    if(copymap[nx][ny] == 0) {
                        zerocnt += 1;
                    }
                }
                board[i][j] -= zerocnt;
                if(board[i][j] < 0) board[i][j] = 0;
            } else continue;
        }
    }
}

void Icecheck() {
    maxelement = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(board[i][j] > 0) {
                maxelement += 1;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    inputkeyboard(); // 입력 받음
    int year = -1;
    while(maxelement--) {
        queue<pair<int, int>> q;
        if(year == -1) {
            year += 1;
        }
        else {
            year += 1;
            meltingIce();
        }
        
        int areacnt = 0;
        initializevisited();
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < M; ++j) {
                if(board[i][j] == 0 || visited[i][j]) continue;
                q.push({i,j});
                visited[i][j] = true;
                areacnt += 1;
                while(!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for(int k = 0; k < 4; ++k) {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                        if(board[nx][ny] == 0 || visited[nx][ny]) continue;
                        q.push({nx, ny});
                        visited[nx][ny] = true;
                    }
                }
            }
        }
        if(areacnt >= 2) {
            cout << year;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
