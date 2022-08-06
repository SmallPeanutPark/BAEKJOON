#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int V; // 심사위원의 수
    cin >> V;
    string str;
    cin >> str;
    int A = 0;
    int B = 0;
    for(int i = 0; i < V; ++i) {
        if(str[i] == 'A') {
            A += 1;
        } else {
            B += 1;
        }
    }

    if(A > B) {
        cout << "A";
    } else if (B > A) {
        cout << "B";
    } else {
        cout << "Tie";
    }
    return 0;
}
