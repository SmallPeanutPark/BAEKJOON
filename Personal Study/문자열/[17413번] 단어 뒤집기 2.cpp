#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string answer;
    string str;
    getline(cin, str);
    queue<char> tag;
    stack<char> reverse_word;
    for(char element : str) {
        if((element == '<') || (element == '>')) {
            tag.push(element);
            if(element == '<') {
                while(!reverse_word.empty()) {
                    answer += reverse_word.top();
                    reverse_word.pop(); 
                }
            } else if(element == '>') {
                while(!tag.empty()) {
                    answer += tag.front();
                    tag.pop();
                }
            }
        } else {
            if(!tag.empty()) {
                tag.push(element);
            } else if(element == ' ') {
                while(!reverse_word.empty()) {
                    answer += reverse_word.top();
                    reverse_word.pop();
                }
                answer += element;
            } else {
                reverse_word.push(element);
            }
        }
    }

    while(!reverse_word.empty()) {
        answer += reverse_word.top();
        reverse_word.pop();
    }

    cout << answer;
    return 0;
}
