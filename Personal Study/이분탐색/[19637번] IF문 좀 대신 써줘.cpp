#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v;

void input(int N) {
    for(int i = 0; i < N; ++i) {
        string str; int num; 
        cin >> str >> num;
        v.emplace_back(make_pair(num, str));
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; int M; cin >> N >> M;
    input(N);
    for(int j = 0; j < M; ++j) {
        int num; cin >> num;
        string temp = "";
        int ll = lower_bound(v.begin(), v.end(), make_pair(num, temp)) - v.begin();
        if(ll < N) {
            cout << v[ll].second << '\n';
        }
    }
    return 0;
}
