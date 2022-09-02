#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        if (q.empty()) {
            if (input.compare("push") == 0) {
                int inputValue;
                cin >> inputValue;
                q.push(inputValue);
            }
            else if (input.compare("empty") == 0) {
                cout << q.empty() << '\n';
            }
            else if (input.compare("pop") == 0) {
                cout << -1 << '\n';
            }
            else if (input.compare("size") == 0) {
                cout << q.size() << '\n';
            } else if(input.compare("front") == 0) {
                cout << -1 << '\n';
            } else if(input.compare("back") == 0) {
                cout << -1 << '\n';
            }
            else {
                // nothing
            }
        }
        else {
            if (input.compare("push") == 0) {
                int inputValue;
                cin >> inputValue;
                q.push(inputValue);
            }
            else if (input.compare("front") == 0) {
                cout << q.front() << '\n';
            }
            else if (input.compare("back") == 0) {
                cout << q.back() << '\n';
            }
            else if (input.compare("empty") == 0) {
                cout << q.empty() << '\n';
            }
            else if (input.compare("size") == 0) {
                cout << q.size() << '\n';
            }
            else if (input.compare("pop") == 0) {
                cout << q.front() << '\n';
                q.pop();
            }
            else {
                // nothing
            }
        }
    }

    return 0;
}
