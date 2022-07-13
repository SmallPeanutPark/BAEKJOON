#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int arr[26] = {}; // 알파벳 저장
        string s1;
        string s2;
        cin >> s1 >> s2;
        int len1 = s1.length();
        int len2 = s2.length();
        for(int j = 0; j < len1; ++j) {
            arr[s1[j] - 'a']++;
        }

        for(int k = 0; k < len2; ++k) {
            arr[s2[k] - 'a']--;
        }

        bool isPossible = true;
        for(const int element : arr) {
            if(element != 0)
                isPossible = false;
                break;
        }

        if(isPossible) 
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
}
