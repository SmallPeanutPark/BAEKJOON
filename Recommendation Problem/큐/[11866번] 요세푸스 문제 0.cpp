#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K; cin >> N >> K;
    queue<int> q;
    for(int i = 1; i <= N; ++i) {
        q.push(i);
    }

    int count = 0;
    vector<int> temp;
    
    while(!q.empty()) {
        count += 1;
        if(count == K) {
            count = 0;
            temp.emplace_back(q.front());
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
        }
    }

    cout << "<";
    for(int i = 0; i < temp.size(); ++i) {
        cout << temp[i];
        if(i != temp.size() - 1) {
            cout << ", ";
        }
    }
    cout << ">";
    return 0;
}
