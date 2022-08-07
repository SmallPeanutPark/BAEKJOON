#include <iostream>
#include <queue>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int area[101][101];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; // 행열 길이 같음
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int n;
            cin >> n;
            area[i][j] = n;
            if (m.find(n) != m.end()) {
                m[n] += 1;
            }
            else {
                m.insert({ n, 1 });
            }
        }
    }
    int map_len = m.size();
    int result = 0;
    for (auto iter = m.begin(); iter != m.end(); ++iter) {
        int criteria = iter->first;
        bool visited[101][101] = { false, };
        queue<pair<int, int>> q;
        int answer = 0;
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                if (criteria >= area[j][k]) {
                    visited[j][k] = true;
                }
                if (visited[j][k]) continue;
                q.push({ j,k });
                visited[j][k] = true;
                answer += 1;
                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int m = 0; m < 4; ++m) {
                        int nx = cur.first + dx[m];
                        int ny = cur.second + dy[m];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if ((criteria >= area[nx][ny]) || (visited[nx][ny])) continue;
                        q.push({ nx,ny });
                        visited[nx][ny] = true;
                    }
                }
            }
        }
        result = max(result, answer);
    }
    if (result > 0)
        std::cout << result;
    else
        std::cout << 1;
    return 0;
}
