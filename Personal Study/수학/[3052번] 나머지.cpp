#include <iostream>
#include <set>
using namespace std;


int main(void) {
    set<int> s;
    for(int i = 0; i < 10; ++i) {
        int n;
        cin >> n;
        n %= 42;
        s.insert(s.begin(), n);
    }
    cout << s.size();
}
