#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<string, int, greater<string>> m;
    for(int i = 0; i < n; ++i) {
        string name, input;
        cin >> name >> input;
        if(input.compare("enter") == 0) {
            m.insert({name, 0});
        } else {
            // leave
            m.erase(name);
        }
    }
    
    
    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        cout << iter->first << '\n';
    }
    return 0;
}
