#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, int> peopleN;
    int N, M; // 듣도 못한 사람의 수, 보도 못한 사람의 수
    cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        // 중복 없음
        peopleN.insert({str, 0});
    }

    int ans = 0;
    vector<string> dic;
    for(int i = 0; i < M; ++i) {
        string str; cin >> str;
        if(peopleN.find(str) != peopleN.end()) {
            // 찾음
            ans += 1;
            dic.push_back(str);
        }
    }

    sort(dic.begin(), dic.end()); // 사전순으로 정렬
    cout << ans << '\n';
    for(string element : dic) {
        cout << element << '\n';
    }
    return 0;
}
