#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        string str; string temp;
        cin >> str >> temp;
        int strLen = str.length();
        int tempLen = temp.length();
        if(strLen != tempLen) {
            cout << str << " & " << temp << " are "  << "NOT anagrams." << '\n';
        } else {
            if(str.compare(temp) == 0) {
                cout << str << " & " << temp << " are " << "anagrams." << '\n';
            } else {
                map<char, int> strM;
                for(char element : str) {
                    if(strM.find(element) != strM.end()) {
                        strM[element] += 1;
                    } else {
                        strM[element] = 1;
                    }
                }

                bool isCheck = false;
                for(char element : temp) {
                    auto result = strM.find(element);
                    if(result != strM.end()) {
                        if(result->second > 0) {
                            result->second -= 1;
                        } else if(result->second == 0) {
                            isCheck = true;
                            break;
                        } else {
                            // do nothing
                        }
                    } else {
                        isCheck = true;
                        break;
                    }
                }

                if(isCheck) {
                    cout << str << " & " << temp << " are "  << "NOT anagrams." << '\n';
                } else {
                    cout << str << " & " << temp << " are " << "anagrams." << '\n';
                }
            }
        }
    }
    return 0;
}
