#include <bits/stdc++.h>
using namespace std;
map<string, int> m;
vector<pair<int, string>> vp;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int K, L; cin >> K >> L; // K : 수강 가능한 인원, L : 수강 신청한 학생 수
    int order = 0; 
    for(int i = 0; i < L; ++i) {
        string temp; cin >> temp;
        m[temp] = ++order;
    }

    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        vp.push_back({iter->second, iter->first});
    }

    sort(vp.begin(), vp.end()); // 오름 차순 정렬
    int len = vp.size();
    for(int i = 0; i < len; ++i) {
        if(i < K) {
            cout << vp[i].second << '\n'; 
        } else {
            break;
        }
    }

    return 0;
}
