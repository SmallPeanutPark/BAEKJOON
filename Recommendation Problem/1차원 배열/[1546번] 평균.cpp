#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n; // 시험 본 과목 개수
    vector<double> v;
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    double maxvalue = *max_element(v.begin(), v.end());
    for (double element : v) {
        sum += element / maxvalue * 100;
    }

    cout.precision(14);
    cout.setf(ios::fixed);
    cout << sum / n;
   
    return 0;
}
