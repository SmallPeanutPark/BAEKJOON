#include <bits/stdc++.h>
using namespace std;
vector<int> parent;

class Edge {
    public:
        int city[2];
        int cost;
        Edge(int city1, int city2, int cost) {
            this->city[0] = city1;
            this->city[1] = city2;
            this->cost = cost;
        }
        bool operator <(Edge& edge) {
            return this->cost < edge.cost;
        }
};

int getParent(vector<int>& parent, int x) {
    if(parent[x] == x) return x;
    else return parent[x] = getParent(parent, parent[x]);
}

void unionParent(vector<int>& parent, int x, int y) {
    x = getParent(parent, x);
    y = getParent(parent, y);
    if(x == y) return;

    if(x < y) parent[y] = x;
    else parent[x] = y;
}

bool findParent(vector<int>& parent, int x, int y) {
    x = getParent(parent, x);
    y = getParent(parent, y);

    if(x == y) return true;
    else return false;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    vector<Edge> v;
    for(int i = 0; i < M; ++i) {
        int a, b, c; cin >> a >> b >> c;
        v.emplace_back(Edge(a, b, c));
    }
    sort(v.begin(), v.end());
    parent.resize(N + 1);
    for(int i = 1; i <= N; ++i) {
        parent[i] = i;
    }

    int gSize = v.size();
    vector<int> gCost;
    for(int i = 0; i < gSize; ++i) {
        if(findParent(parent, v[i].city[0], v[i].city[1]) == false) {
            unionParent(parent, v[i].city[0], v[i].city[1]);
            gCost.emplace_back(v[i].cost);
        }
    }
    sort(gCost.begin(), gCost.end());
    int ans = 0;
    for(int i = 0; i < gCost.size() - 1; ++i) {
        ans += gCost[i];
    }

    cout << ans;
    return 0;
}
