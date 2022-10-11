#include <bits/stdc++.h>
#define MAX 32001
using namespace std;

vector<int> graph[MAX];
vector<int> indegree; // 진입 차수
vector<int> result;
int N;
int M;

void input() {
    for(int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        indegree[b] += 1;
    }
}

void topologySort() {
    queue<int> q;
    for(int i = 1; i <= N; ++i) {
        if(indegree[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        result.push_back(cur);
        for(int next : graph[cur]) {
            indegree[next] -= 1;
            if(indegree[next] == 0) q.push(next);
        }
    }

    for(int element : result) cout << element << ' ';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    indegree.resize(N+1, 0);
    input();
    topologySort();
    return 0;
}
