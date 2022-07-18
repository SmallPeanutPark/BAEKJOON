#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    int K;
    cin >> N >> K; // N명의 사람

    queue<int> q;

    for(int i = 1; i <= N; ++i) {
        q.push(i);
    }

    int cnt = 1;
    vector<int> v;
    while(!q.empty()) {
        if(cnt == K) {
            cnt = 1;
            v.push_back(q.front());
            q.pop();
        } else {
            ++cnt;
            q.push(q.front());
            q.pop();
        }
    }
    int len = v.size();
    cout << "<";
    for(int i = 0; i < len; ++i) {
        if(i == len -1) {
            cout << v[i] << ">";
        } else {
            cout << v[i] << ", ";
        } 
    }

    return 0;
}
