#include <bits/stdc++.h>
using namespace std;
vector<int> parent;

class Edge {
    public:
        int node[2];
        int cost;
        Edge(int node1, int node2, int cost) {
            this->node[0] = node1;
            this->node[1] = node2;
            this->cost = cost;
        }

        // 비용 오름 차순 정렬을 위해서 필수
        bool operator <(Edge& edge) {
            return this->cost < edge.cost;
        }
};

int getParent(vector<int>& parent,int n1) {
    if(parent[n1] == n1) return n1;
    else return parent[n1] = getParent(parent, parent[n1]);
}

void unionParent(vector<int>& parent, int n1, int n2) {
    n1 = getParent(parent, n1);
    n2 = getParent(parent, n2);

    if(n1 == n2) return;

    if(n1 < n2) parent[n2] = n1;
    else parent[n1] = n2;
}

bool findParent(vector<int>& parent, int n1, int n2) {
    n1 = getParent(parent, n1);
    n2 = getParent(parent, n2);
    if(n1 == n2) return true;
    else return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int V, E; cin >> V >> E;
    vector<Edge> v;
    for(int i = 0; i < E; ++i) {
        int n1, n2, cost; cin >> n1 >> n2 >> cost;
        v.emplace_back(Edge(n1, n2, cost)); // 간선 정보 저장
    }
    sort(v.begin(), v.end());
    parent.resize(V + 1, 0);
    for(int i = 1; i <= V; ++i) {
        parent[i] = i;
    }

    int gSize = v.size();
    int gSum = 0;
    for(int i = 0; i < gSize; ++i) {
        if(findParent(parent, v[i].node[0], v[i].node[1]) == false) {
            gSum += v[i].cost;
            unionParent(parent, v[i].node[0], v[i].node[1]);
        }
    }
    cout << gSum;
    return 0;
}
