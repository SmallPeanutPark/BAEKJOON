#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int A,B;
    cin >> A >> B;
    if (A > B) {
        cout << '>';
    } else if (A == B) {
        cout << "==";
    } else {
        cout << '<';
    }

    return 0;
}
