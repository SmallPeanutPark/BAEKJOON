#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    queue<int> q;
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        if(!q.empty()) {
            // 큐가 비어있지 않을 때
            if(command.compare("push") == 0) {
                // 정수 X를 큐에 넣는 연산이다.
                int X;
                cin >> X;
                q.push(X);
            } else if(command.compare("front") == 0) {
                // 큐가 비어있지 않다면 큐의 가장 앞에 있는 정수를 출력한다.
                cout << q.front() << '\n';
            } else if(command.compare("back") == 0) {
                // 큐가 비어있지 않다면 큐의 가장 뒤에 있는 정수를 출력한다.
                cout << q.back() << '\n';
            } else if(command.compare("size") == 0) {
                // 큐에 들어있는 정수의 개수를 출력한다.
                cout << q.size() << '\n';
            } else if(command.compare("empty") == 0) {
                //큐가 비어있지 않다면 0을 출력한다.
                cout << q.empty() << '\n';
            } else if(command.compare("pop") == 0) {
                // 큐에서 가장 앞의 정수를 빼고, 그 수를 출력한다.
                cout << q.front() << '\n';
                q.pop();
            } else { 
                // nothing 
            }
        } else {
            // 큐가 비어있을 때
            if(command.compare("push") == 0) {
                // 정수 X를 큐에 넣는 연산이다.
                int X;
                cin >> X;
                q.push(X);
            } else if(command.compare("front") == 0) {
                // 큐가 비어있다면 -1을 출력한다.
                cout << -1 << '\n';
            } else if(command.compare("back") == 0) {
                // 큐가 비어있다면 -1을 출력한다.
                cout << -1 << '\n';
            } else if(command.compare("pop") == 0) {
                // 큐가 비어있다면 -1을 출력한다.
                cout << -1 << '\n';
            } else if(command.compare("size") == 0) {
                // 큐에 들어있는 정수의 개수를 출력한다.
                cout << q.size() << '\n';
            } else if(command.compare("empty") == 0) {
                // 큐가 비어있으면 0을 출력한다.
                cout << q.empty() << '\n';
            } else {
                // nothing
            }
        }
    }
}
