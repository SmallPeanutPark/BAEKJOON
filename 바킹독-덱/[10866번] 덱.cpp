#include <bits/stdc++.h>
using namespace std;

int main(void) {
    deque<int> dq;
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        if(str.compare("push_back") == 0) {
            int n;
            cin >> n;
            dq.push_back(n);
        } else if(str.compare("push_front") == 0) {
            int n;
            cin >> n;
            dq.push_front(n);
        } else if(str.compare("front") == 0) {
            if(dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
        } else if(str.compare("back") == 0) {
            if(dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
            }
        } else if(str.compare("size") == 0) {
            cout << dq.size() << '\n';
        } else if(str.compare("empty") == 0) {
            if(dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if(str.compare("pop_front") == 0) {
            if(dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if(str.compare("pop_back") == 0) {
            if(dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else { 
            // nothing 
        }
    }
    return 0;
}
