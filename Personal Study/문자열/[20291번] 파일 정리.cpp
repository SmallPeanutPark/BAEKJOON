#include <bits/stdc++.h>
using namespace std;
map<string, int> extensionCnt;
vector<pair<string, int>> extension;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        auto location = str.find(".");
        string temp = str.substr(location + 1);
        extensionCnt[temp] += 1;
    }
    
    for(auto iter = extensionCnt.begin(); iter != extensionCnt.end(); ++iter) {
        extension.push_back({iter->first, iter->second});
    }

    sort(extension.begin(), extension.end());
    for(pair<string, int> element : extension) {
        cout << element.first << ' ' << element.second << '\n';   
    }
    return 0;
}
