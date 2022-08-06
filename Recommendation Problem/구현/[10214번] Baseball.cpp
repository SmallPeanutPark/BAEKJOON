#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i = 0; i < T; ++i) {
        int Yeon = 0;
        int Ko = 0;
        for(int j = 0; j < 9; ++j) {
            int Y, K;
            cin >> Y >> K;
            Yeon += Y;
            Ko = K;
        }
        if(Yeon > Ko) {
            cout << "Yonsei" << '\n';
        } else if(Yeon < Ko) {
            cout << "Korea" << '\n';
        } else {
            cout << "Draw" << '\n';
        }
    }
    return 0;
}
