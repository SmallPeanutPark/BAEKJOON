#include <string>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<char> strlist;
    string inputstr;
    cin >> inputstr;
    int len = inputstr.length();
    for (int i = 0; i < len; ++i) {
        strlist.push_back(inputstr[i]);
    }
    list<char>::iterator cusor = (strlist.end());

    int M; // 명령어 개수
    cin >> M;
    for (int i = 0; i < M; ++i) {
        char LDBP;
        cin >> LDBP;
        if (LDBP == 'L') {
            // 커서를 왼쪽으로 한칸 옮김 (커서가 문장의 맨앞이면 무시)
            if (cusor == strlist.begin()) {
                //pass
            }
            else {
                --cusor;
            }
        }
        else if (LDBP == 'D') {
            // 커서를 오른쪽으로 한칸 옮김 (커서가 문장의 맨뒤면 무시)
            if (cusor == (strlist.end())) {
                // pass
            }
            else {
                ++cusor;
            }
        }
        else if (LDBP == 'B') {
            // 커서 왼쪽에 있는 문자 삭제
            if (cusor == strlist.begin()) {
                // pass
            }
            else {
                list<char>::iterator tempiter = cusor;
                strlist.erase(--tempiter);
            }
        }
        else {
            // 커서 왼쪽에 추가
            char c;
            cin >> c;
            list<char>::iterator tempiter = cusor;
            strlist.insert(tempiter, c);
        }
    }

    for (auto iter = strlist.begin(); iter != strlist.end(); ++iter) {
        cout << *iter;
    }
    return 0;
}
