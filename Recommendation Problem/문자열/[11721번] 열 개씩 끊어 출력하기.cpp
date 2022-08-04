#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {

    string str;
    cin >> str;
    int len = str.length();
    int copylen = len;
    string s = "";
    int slen = s.length();
    for (int i = 0; i < copylen / 10; ++i) {
        s = str.substr(slen, 10);
        cout << s << '\n';
        slen += s.length();
    }

    int result = len - slen;
    if ((result < 10) && (result > 0))
    {
        cout << str.substr(slen);
    }
    return 0;
}
