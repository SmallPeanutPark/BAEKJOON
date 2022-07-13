#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int A,B;
    cin >> A >> B;
    string s = to_string(A);
    string s1 = to_string(B);

    int slength = s.length();
    int s1length = s1.length();

    string value1;
    for(int i = slength - 1; i >= 0; --i) {
        value1 += s[i];
    }

    string value2;
    for(int i = s1length - 1; i >= 0; --i) {
        value2 += s1[i];
    }

    if(value1 > value2) {
        cout << value1;
    } else {
        cout << value2;
    }

    return 0;
}
