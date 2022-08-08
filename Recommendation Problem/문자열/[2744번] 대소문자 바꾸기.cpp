#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; ++i) {
        if(islower(str[i]) != 0) {
            // 소문자 -> 대문자
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;
    return 0;
}
