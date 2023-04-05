#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    string temp; cin >> temp;
    
    if(strstr(str.c_str(), temp.c_str()) != NULL) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
