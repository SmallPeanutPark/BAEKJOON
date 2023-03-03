#include <bits/stdc++.h>
using namespace std;
vector<pair<string, tuple<int, int, int>>> v;

// 국어 점수가 감소하는 순서로
// 국어 점수가 같으면 영어 점수가 증가하는 순서로
// 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
// 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 
// (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)

void input(int N) {
    for(int i = 0; i < N; ++i) {
        string name; cin >> name;
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        v.push_back(make_pair(name, make_tuple(n1, n2, n3)));
    }
}

bool cmp(pair<string, tuple<int, int, int>> a, pair<string, tuple<int, int, int>> b) {
    int koreanA = get<0>(a.second);
    int koreanB = get<0>(b.second);
    if(koreanA == koreanB) {
        int englishA = get<1>(a.second);
        int englishB = get<1>(b.second);
        if(englishA == englishB) {
            int mathA = get<2>(a.second);
            int mathB = get<2>(b.second);
            if(mathA == mathB) {
                if(a.first < b.first) return true;
                else return false; 
            } else {
                if(mathA < mathB) return false;
                else return true;
            }
        } else {
            if(englishA < englishB) return true;
            else return false;
        }
    } else {
        if(koreanA < koreanB) return false;
        else return true;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    sort(v.begin(), v.end(), cmp);
    for(auto element : v) {
        cout << element.first << '\n';
    }
    return 0;
}
