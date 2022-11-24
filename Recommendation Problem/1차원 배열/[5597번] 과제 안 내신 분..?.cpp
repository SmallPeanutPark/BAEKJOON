#include <bits/stdc++.h>

using namespace std;
vector<int> people;
vector<int> reference = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

int main(void) {
    vector<int> ans;
    for(int i = 0; i < 28; ++i) {
        int n; cin >> n;
        people.push_back(n);
    }
    sort(people.begin(), people.end());
    for(int i = 0; i < 30; ++i) {
        if(ans.size() == 2) break;
        auto result = find(people.begin(), people.end(), reference[i]);
        if(result == people.end())  ans.push_back(reference[i]);
    }
    cout << ans[0] << '\n';
    cout << ans[1] << '\n';
    return 0;
}
