#include <bits/stdc++.h>
using namespace std;

vector<int> port;
vector<int> maxlinked;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int portNumber; cin >> portNumber;
        port.emplace_back(portNumber);
    }

    for(int element : port) {
        if(maxlinked.empty()) 
        {
            maxlinked.emplace_back(element);
        } else {
            if(maxlinked.back() < element) {
                maxlinked.emplace_back(element);
            } else {
                auto location = lower_bound(maxlinked.begin(), maxlinked.end(), element);
                maxlinked[location - maxlinked.begin()] = element;
            }
        }
    }
    cout << maxlinked.size();
    return 0;
}
