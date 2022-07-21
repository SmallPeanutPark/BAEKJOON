#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s = to_string(m);
    int sum = 0;
    for (int i = 1; i <= 3; ++i) {
        switch (i) {
            case 1 :
            {
                // 일의 자리수
                int num = s[2] - '0';
                sum += (n * num);
                cout << n * num << '\n';
            }
            break;
            case 2 :
            {
                // 십의 자리수
                int num = (s[1] - '0') * 10;
                sum += (n * num);
                cout << (n * num) / 10 << '\n';

            }
            break;
            case 3 :
            {
                // 백의 자리수
                int num = (s[0] - '0') * 100;
                sum += (n * num);
                cout << (n * num) / 100 << '\n';
                
            }
            break;
        }
    }
    cout << sum;
    return 0;
}
