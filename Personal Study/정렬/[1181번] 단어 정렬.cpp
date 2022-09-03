#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& s1, const string& s2) {
    if(s1.length() == s2.length()) {
        return s1 < s2;
    } else {
        return s1.length() < s2.length();
    }
}   

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<string> v;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        v.emplace_back(str);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(string element : v) {
        cout << element << '\n';
    }
    return 0;
}
