#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;  // 테스트 케이스 개수

    for(int i = 0; i < n; ++i) {
        list<char> keyboard;
        list<char>::iterator cusor = keyboard.begin();

        string s;
        cin >> s;
        int s_length = s.length();
        for(int j = 0; j < s_length; ++j) {
            if(s[j] == '<') {
                if(cusor != keyboard.begin()) {
                    // 왼쪽 커서 이동 가능
                    --cusor;
                }
            }
            else if(s[j] == '>') {
                if(cusor != keyboard.end()) {
                    // 오른쪽 커서 이동 가능
                    ++cusor;
                }
            } else if(s[j] == '-') {
                // 앞에 글자가 있다면 삭제
                if(cusor != keyboard.begin()) {
                    // erase 시 삭제된 원소 다음 원소를 가르키도록 갱신해줘야함
                    cusor = keyboard.erase(--cusor);
                }
            } else {
                keyboard.insert(cusor, s[j]);
            }
        }
        // 결과 출력
        for(auto element : keyboard) {
            cout << element;
        }
        cout << '\n';
    }
    return 0;
}
