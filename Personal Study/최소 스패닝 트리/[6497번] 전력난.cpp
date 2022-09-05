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

int getParent(vector<int>& parent, int city) {
    if(parent[city] == city) return city;
    else return parent[city] = getParent(parent, parent[city]);
}

void unionParent(vector<int>& parent, int city1, int city2) {
    city1 = getParent(parent, city1);
    city2 = getParent(parent, city2);

    if(city1 == city2) return;

    if(city1 < city2) parent[city2] = city1;
    else parent[city1] = city2;
}

bool findParent(vector<int>& parent, int city1, int city2) {
    city1 = getParent(parent, city1);
    city2 = getParent(parent, city2);
    if(city1 == city2) return true;
    else return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; // 집의 수, 길의 수
    while(cin >> m >> n) {
        if(m == 0 && n == 0) break;
        vector<Edge> v;
        parent.resize(m + 1, 0);
        int total_cost = 0;
        for(int i = 1; i <= m; ++i) {
            parent[i] = i;
        }
        for(int i = 0; i < n; ++i) {
            int x, y, z; cin >> x >> y >> z;
            total_cost += z;
            v.emplace_back(Edge(x, y, z));
        }
        sort(v.begin(), v.end()); // 비용을 기준으로 오름 차순 정렬
        int gSize = v.size();
        int gCost = 0;
        for(int i = 0; i < gSize; ++i) {
            if(findParent(parent, v[i].city[0], v[i].city[1]) == false) {
                unionParent(parent, v[i].city[0], v[i].city[1]);
                gCost += v[i].cost;
            }
        }
        cout << total_cost - gCost << '\n';
    }
    return 0;
}
