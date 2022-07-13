#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[26];

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; ++i) {
        if (isalpha(s[i])) {
            arr[toupper(s[i]) - 'A']++;
        }
    }
    
    // 가장 많이 나온 알파벳 체크
    int maxvalue = *max_element(arr, arr + 26);
    int overlap = 0;
    int result = 65;
    for (int i = 0; i < 26; ++i) {
        if (arr[i] == maxvalue) {
            ++overlap;
            result += i;
        }
    }
    
    // 가장 많이 나온 알파벳이 여러개일 때
    if (overlap > 1) {
        cout << '?';
    } else {
        cout << (char)result;
    }
}
