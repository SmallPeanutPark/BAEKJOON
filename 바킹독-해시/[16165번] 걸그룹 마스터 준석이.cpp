#include <bits/stdc++.h>
using namespace std;
multimap<string, string> total_group[101]; // group, name
map<string, string> totalmember;// name, group

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M; // 걸그룹 수, 맞춰야할 문제 수
    int totalgirlNum = 0;
    for(int i = 0; i < N; ++i) {
        multimap<string, string> temp;
        string girlgroupName; cin >> girlgroupName;
        int girlNum; cin >> girlNum;
        totalgirlNum += girlNum;
        for(int j = 0; j < girlNum; ++j) {
            string name; cin >> name;
            temp.insert({girlgroupName, name});
            totalmember[name] = girlgroupName;
        }
        total_group[i] = temp;
    }

    for(int i = 0; i < M; ++i) {
        string str; 
        int kind; 
        cin >> str >> kind;
        if(kind == 0) {
            // str : 팀 이름
            for(int j = 0; j < N; ++j) {
                multimap<string, string> m = total_group[j];
                if(m.find(str) != m.end()) {
                    vector<string> v;
                    for(auto iter = m.begin(); iter != m.end(); ++iter) {
                        // 팀 전체 인원 출력 (사전 순)
                        v.emplace_back(iter->second);
                    }
                    sort(v.begin(), v.end());
                    for(string element : v) {
                        cout << element << '\n';
                    }
                    break;
                }
            }
        } else {
            // kind == 1, str : 멤버 이름
            cout << totalmember[str] << '\n';
        }
    }

    return 0;
}
