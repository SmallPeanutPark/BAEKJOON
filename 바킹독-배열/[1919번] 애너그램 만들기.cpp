#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int ans = 0;
    int A[26] = {}; // 알파벳 저장
    int B[26] = {}; // 알파벳 저장
    string s1;
    string s2;
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int j = 0; j < len1; ++j) {
        A[s1[j] - 'a']++;
    }

    for(int k = 0; k < len2; ++k) {
        B[s2[k] - 'a']++;
    }

    for(int m = 0; m < 26; ++m) {
        while(true) {
            if(A[m] != B[m]) {
                if(A[m] > B[m]) {
                    A[m]--;
                    ++ans;
                } else {
                    B[m]--;
                    ++ans;
                }
            } else {
                break;
            }
        }
    }
    cout << ans;
}
