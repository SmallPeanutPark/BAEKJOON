#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int people; cin >> people;
    vector<int> money;
    for(int i = 0; i < people; ++i) {
        int one, two, three;
        int sum = 0;
        cin >> one >> two >> three;
        if((one == two) && (one == three)) {
            // 모두 같은 경우
            sum += ((10000) + (one * 1000));
        } else if(one == two) {
            // 두개만 같은 경우
            sum += ((1000) + (one * 100));
        } else if(one == three) {
            // 두개만 같은 경우
            sum += ((1000) + (one * 100));
        } else if(two == three) {
            sum += ((1000) + (two * 100));
        } else {
            // 세개가 다른 경우
            int result = max(one, max(two, three));
            sum += (result * 100);
        }
        money.push_back(sum);
    }
    sort(money.begin(), money.end());
    cout << money[money.size() -1];
}
