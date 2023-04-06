#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    string s; string t;
    while(true) {
        cin >> s >> t;
        if(cin.eof()) break;
        // s가 t의 부분 문자열인가? 확인
        int slen = s.length();
        int tlen = t.length();
        if(slen > tlen) {
            //부분 문자열이 될 수 없음
            cout << "No" << '\n';
        } else {
            int l = t.find(s[0]);
            int sidx = 0;
            string temp;
            for(int i = l; i < tlen; ++i) {
                if(t[i] == s[sidx]) {
                    sidx++;
                    temp += t[i];
                }
            }
            if(temp.compare(s) == 0) {
                cout << "Yes" << '\n';
            } else {
                cout << "No" << '\n';
            }
        }
    }
    return 0;
}
