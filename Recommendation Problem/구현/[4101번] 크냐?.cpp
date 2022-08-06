#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int firstnumber, secondnumber;
    while(cin >> firstnumber >> secondnumber) {
        if((firstnumber == 0) && (secondnumber == 0)) break;
        if(firstnumber > secondnumber) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}
