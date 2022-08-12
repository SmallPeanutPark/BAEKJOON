#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> graph[101];

void bfs(int cur) {
    int arr[101];
    bool visited[101];
    fill(arr, arr + 101, 0);
    fill(visited, visited + 101, false);

    queue<int> q;
    q.push(cur);
    while(!q.empty()) {
        int cur_vertex = q.front();
        q.pop();
        for(int element : graph[cur_vertex]) {
            if(visited[element]) continue;
            q.push(element);
            visited[element] = true;
            arr[element] = 1;
        }
    }
    for(int i = 1; i <= N; ++i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j) {
            int n; cin >> n;
            if(n == 1) {
                // i 에서 j로 가는 간선이 존재한다.
                graph[i].emplace_back(j);
            }
        }
    }
    
    // 경로 탐색
    for(int i = 1; i <= N; ++i) {
        // 각 정점을 확인한다.
        bfs(i);
    }
}
