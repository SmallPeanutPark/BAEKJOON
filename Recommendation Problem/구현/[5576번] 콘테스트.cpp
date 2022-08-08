#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> w;
    vector<int> k;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 10; ++j) {
            int n;
            cin >> n;
            if(i == 0) w.push_back(n);
            else k.push_back(n);
        }
        if(i == 0) sort(w.begin(), w.end());
        else sort(k.begin(), k.end());
    }
    int wsum = 0;
    wsum += w[9]; wsum += w[8]; wsum += w[7];
    int ksum = 0;
    ksum += k[9]; ksum += k[8]; ksum += k[7];
    cout << wsum << ' ' << ksum;
}
