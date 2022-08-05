#include <iostream>
#include <queue>
#include <utility>
using namespace std;

// 위, 아래, 왼쪽, 오른쪽, 앞, 뒤 6방향

int tomato[101][101][101];
int cal_tomato[101][101][101] = { 0, };

int dh[6] = { 1, -1, 0, 0, 0, 0};
int dn[6] = { 0, 0, 0, 0, 1, -1};
int dm[6] = { 0, 0, -1, 1,0, 0};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, N, H; // 가로칸의수, 세로칸의수, 상자의 수
    cin >> M >> N >> H;
    bool allnotsave = false;
    queue<pair<int, int>> hn;
    queue<int> m;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                cin >> tomato[i][j][k];// 1 : 익은 토마토, 0 : 익지 않은 토마토, -1 토마토가 들어 있지 않음

                if (tomato[i][j][k] == 0) {
                    // 익지 않은 토마토
                    allnotsave = true;
                    cal_tomato[i][j][k] = -1;
                }

                if (tomato[i][j][k] == 1) {
                    // 익은 토마토 좌표 저장
                    hn.push({ i, j });
                    m.push(k);
                }
            }
        }
    }

    if (!allnotsave) {
        // 저장될 때 모든 토마토가 익어있는 상태
        cout << 0;
        return 0;
    }

    while (!hn.empty() && !m.empty()) {
        pair<int, int> curhn = hn.front();
        int curm = m.front();
        hn.pop();
        m.pop();
        for (int i = 0; i < 6; ++i) {
            int nh = curhn.first + dh[i];
            int nn = curhn.second + dn[i];
            int nm = curm + dm[i];
            if (nh < 0 || nh >= H || nn < 0 || nn >= N || nm < 0 || nm >= M) continue;
            if (tomato[nh][nn][nm] == -1) continue; // 토마토 들어있지 않음 제외
            if (cal_tomato[nh][nn][nm] != -1)  continue; // 익은 토마토 제외
            cal_tomato[nh][nn][nm] = cal_tomato[curhn.first][curhn.second][curm] + 1; // 토마토 익었음
            hn.push({ nh,nn });
            m.push(nm);
        }
    }

    int result = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                if (cal_tomato[i][j][k] == -1) {
                    // 익지 않은 토마토가 있다면
                    cout << -1;
                    return 0;
                }
                result = max(result, cal_tomato[i][j][k]);
            }
        }
    }

    cout << result;

    return 0;
}
