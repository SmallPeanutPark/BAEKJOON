#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

string field[101];
char colorweaknessfield[101][101];
bool visited[101][101];
bool colorweaknessvisited[101][101];
int general;
int colorweakness;

int main(void) {
	general = 0; // 일반 사람
	colorweakness = 0; // 적록색약 사람
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> field[i];
		fill(visited[i], visited[i] + 101, false);
		fill(colorweaknessvisited[i], colorweaknessvisited[i] + 101, false);
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (field[i][j] == 'G')
				colorweaknessfield[i][j] = 'R';
			else colorweaknessfield[i][j] = field[i][j];
		}
	}

	queue<pair<int, int>> q;
	queue<char> cq;	 // 현재 문자 저장
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (visited[i][j]) continue;
			q.push({ i, j });
			cq.push(field[i][j]);
			char temp = cq.front();
			visited[i][j] = true;
			while (!q.empty()) {
				pair<int, int> cur = q.front();
				char c = cq.front();
				q.pop();
				cq.pop();
				for (int k = 0; k < 4; ++k) {
					int nx = cur.first + dx[k];
					int ny = cur.second + dy[k];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (visited[nx][ny] || field[nx][ny] != c) continue;
					q.push({ nx,ny });
					cq.push(field[nx][ny]);
					visited[nx][ny] = true;
				}
			}

			// 색깔 별로 구분 : 적록색약은 빨간색과 초록색의 차이를 거의 느끼지 못한다.
			// 일반사람은 색 별로 +1 하면 됨 
			if (temp == 'R') {
				general += 1;		
			}
			else if (temp == 'G') {
				general += 1;
			}
			else {
				// B
				general += 1;
			}
		}
	}

	queue<pair<int, int>> wq;
	queue<char> wcq;	 // 현재 문자 저장
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (colorweaknessvisited[i][j]) continue;
			wq.push({ i, j });
			wcq.push(colorweaknessfield[i][j]);
			char temp = wcq.front();
			colorweaknessvisited[i][j] = true;
			while (!wq.empty()) {
				pair<int, int> cur = wq.front();
				char c = wcq.front();
				wq.pop();
				wcq.pop();
				for (int k = 0; k < 4; ++k) {
					int nx = cur.first + dx[k];
					int ny = cur.second + dy[k];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (colorweaknessvisited[nx][ny] || colorweaknessfield[nx][ny] != c) continue;
					wq.push({ nx,ny });
					wcq.push(colorweaknessfield[nx][ny]);
					colorweaknessvisited[nx][ny] = true;
				}
			}
			if (temp == 'R') {
				colorweakness += 1;
			}
			else if(temp == 'B') {
				// B
				colorweakness += 1;
			}
			else { 
				// nothing  
			}
		}
	}

	cout << general << ' ' << colorweakness;

	return 0;
}
