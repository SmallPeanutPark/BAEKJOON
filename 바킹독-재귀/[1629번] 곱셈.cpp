#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
ull A, B, C;

ull divisional(ull A, ull B, ull C) {
    if(B == 1) {
        return A % C;
    } else {
        ull result = divisional(A, B / 2, C);
        if(B % 2 == 0) 
        {
            return (result * result) % C;
        } else {
            return (((result * result) % C) * A % C);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> A >> B >> C;
    ull result = 0;
    cout << divisional(A, B, C);
}   
