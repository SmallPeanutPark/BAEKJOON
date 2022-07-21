#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int ans = 0;
    int num;
    cin >> num; // 숫자 주어짐
    int savenum = num;
    bool flag = false;
    string numstr = to_string(num);
    string resultstr;
    while(true) {
        if((num < 10) && (!flag)) {
            //앞에 0을 붙여서 2자리 수를 만든다.
            string s;
            s += '0';
            s += numstr;
            numstr.clear();
            numstr = s;    
        }
        flag = true;        
        // 각 자리 숫자를 더한다.
        num = (numstr[0] - '0') + (numstr[1] - '0');
        // 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리수를 이어 붙여 새로운 수를 만들어라
        string temp = to_string(num);
        int temp_len = temp.length();
        if(temp_len > 1) {
            resultstr += numstr[1];
            resultstr += temp[temp_len - 1];
        } else {
            resultstr += numstr[1];
            resultstr += temp[0];
        }
        ans += 1;
        numstr.clear();
        numstr = resultstr;
        num = stoi(resultstr); 
        resultstr.clear();
        if(num == savenum)
            break;
    }
    cout << ans;
}
