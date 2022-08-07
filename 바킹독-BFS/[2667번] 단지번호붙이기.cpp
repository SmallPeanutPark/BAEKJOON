#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

string board[26];
bool visited[26][26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N; // 지도 크기
    for (int i = 0; i < N; ++i) {
        cin >> board[i];
        fill(visited[i], visited[i] + N, false);
    }
    queue<pair<int, int>> q;
    int num = 0;
    vector<int> result;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if ((visited[i][j]) || (board[i][j] == '0')) continue;
            q.push({ i,j });
            visited[i][j] = true;
            num += 1;
            int housecnt = 0;
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                housecnt += 1;
                for (int k = 0; k < 4; ++k) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                    if (visited[nx][ny] || board[nx][ny] == '0') continue;
                    q.push({ nx,ny });
                    visited[nx][ny] = true;
                }
            }
            result.push_back(housecnt);
        }
    }
    cout << num << '\n';
    sort(result.begin(), result.end());
    for (int element : result) {
        cout << element << '\n';
    }
    return 0;
}
