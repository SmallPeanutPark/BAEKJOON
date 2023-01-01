#include <bits/stdc++.h>

using namespace std;

string temp[1000001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; getline(cin,str);
    stringstream sstream(str);
    string s = "";
    vector<string> vs;
    while(sstream >> s) {
        vs.emplace_back(s);
    }
    cout << vs.size();
    return 0;
}
