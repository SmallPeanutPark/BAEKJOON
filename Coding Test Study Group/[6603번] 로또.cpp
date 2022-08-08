#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K;
bool selected[50];

void dfs(int idx, int cnt, vector<int>& v) {
    if(cnt == 6) {
        for(int i = 0; i < K; ++i) {
            if(selected[i])
                cout << v[i] << ' ';
        }
        cout << '\n';
    }
    for(int i = idx; i < K; ++i) {
        if(selected[i]) continue;
        selected[i] = true;
        dfs(i, cnt + 1, v);
        selected[i] = false;
    }
}

int main(void) {
    while(true) {
        cin >> K;
        if(K == 0) break;
        fill(selected, selected + K, false);
        vector<int> lottonumber;
        for(int i = 0; i < K; ++i) {
            int n; cin >> n;
            lottonumber.push_back(n);
        }
        sort(lottonumber.begin(), lottonumber.end());
        dfs(0, 0, lottonumber);
        cout << '\n';
    }


}
