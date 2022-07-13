#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        int check = 1;
        int sum = 0;
        for(int j = 0; j < s.length(); ++j) {
            if(s[j] == 'O') {
                sum += check;
                ++check;
            } else {
                check = 1;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
