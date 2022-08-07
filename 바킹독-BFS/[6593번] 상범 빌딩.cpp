#include <iostream>
#include <string>
#include <queue>

using namespace std;

int dx[6] = {1, 0, -1, 0, 0, 0}; 
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

string sangbumbuilding[31][31];
int escapetime[31][31][31];

int main(void) {
    int L, R, C; // 층 수, 행, 열
    while (cin >> L >> R >> C) {
        if ((L == 0) && (R == 0) && (C == 0)) break;
        queue<pair<int, int>> xy;
        queue<int> z;
        bool issangbum = false;
        bool isescape = false;
        int escapex = 0; int escapey = 0; int escapez = 0;
        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < R; ++j) {
                cin >> sangbumbuilding[i][j];
                fill(escapetime[i][j], escapetime[i][j] + C, -1);
                if (!issangbum || !isescape) {
                    for (int k = 0; k < C; ++k) {
                        if (sangbumbuilding[i][j][k] == 'S') {
                            escapetime[i][j][k] = 0;
                            xy.push({ j,k });
                            z.push({ i });
                            issangbum = true;
                        }
                        if (sangbumbuilding[i][j][k] == 'E') {
                            escapex = j;
                            escapey = k;
                            escapez = i;
                            isescape = true;
                        }
                    }
                }
            }
        }

        while (!xy.empty() && !z.empty()) {
            pair<int, int> curxy = xy.front();
            int curz = z.front();
            xy.pop();
            z.pop();
            for (int a = 0; a < 6; ++a) {
                int nx = curxy.first + dx[a];
                int ny = curxy.second + dy[a];
                int nz = curz + dz[a];
                if (nx < 0 || nx >= R || ny < 0 || ny >= C || nz < 0 || nz >= L) continue;
                if ((sangbumbuilding[nz][nx][ny] == '#') || (escapetime[nz][nx][ny] != -1)) continue;
                xy.push({ nx,ny });
                z.push(nz);
                escapetime[nz][nx][ny] = escapetime[curz][curxy.first][curxy.second] + 1;
            }
        }
        if (escapetime[escapez][escapex][escapey] != -1) {
            cout << "Escaped in " << escapetime[escapez][escapex][escapey] << " minute(s)." << '\n';
        }
        else {
            cout << "Trapped!" << '\n';
        }
    }
    return 0;
}
