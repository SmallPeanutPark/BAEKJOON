#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void) {
    int N;
    cin >> N;

    string s = to_string(N);
    int len = s.length();
    sort(s.begin(), s.end(), greater<int>());

    for(auto element : s)
        cout << element;
    return 0;
}
