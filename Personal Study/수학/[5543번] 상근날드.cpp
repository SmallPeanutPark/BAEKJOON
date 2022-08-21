#include <bits/stdc++.h>
using namespace std;

vector<int> burger;
vector<int> drink;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // 햄버거
    for(int i = 0; i < 3; ++i) {
        int money; cin >> money;
        burger.emplace_back(money);
    }
    // 음료수
    for(int i = 0; i < 2; ++i) {
        int money; cin >> money;
        drink.emplace_back(money);
    }
    cout << *min_element(burger.begin(), burger.end()) + *min_element(drink.begin(), drink.end()) - 50;
    return 0;
}
