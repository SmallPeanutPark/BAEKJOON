#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dx[8] = { 2, 1, -1, -2, -2,  -1, 1, 2};
int dy[8] = { 1, 2, 2,  1,  -1, -2, -2, -1};


int main(void) {
	int N;
	cin >> N; // 테스트 케이스 개수
	for (int i = 0; i < N; ++i) {
		int l; // 체스판의 한변의 길이
		cin >> l;
		
		int dist[301][301] = { 0, }; // 거리 - 이동해야하는 칸
		bool visited[301][301] = { false, };

		queue<pair<int, int>> q;
		int firstx, firsty; // 나이트가 현재 있는 칸
		cin >> firstx >> firsty;
		q.push({ firstx, firsty });

		int finalx, finaly; // 나이트가 이동하려는 칸
		cin >> finalx >> finaly;

		dist[firstx][firsty] = 0;
		visited[firstx][firsty] = true;
		while (!q.empty()) {
			pair<int, int> curlocation = q.front();
			q.pop();
			for (int k = 0; k < 8; ++k) {
				int nx = curlocation.first + dx[k];
				int ny = curlocation.second + dy[k];
				if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
				if (visited[nx][ny]) continue;
				q.push({ nx, ny });
				visited[nx][ny] = true;
				dist[nx][ny] = dist[curlocation.first][curlocation.second] + 1;
			}
		}
		cout << dist[finalx][finaly] << '\n';
	}

	return 0;
}
