#include <string>
#include <iostream>
using namespace std;

int arr[26];

int main() {
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; ++i) {
		if (arr[s[i] - 'a'] == 0) {
			if (i == 0) {
				arr[s[i] - 'a'] = -2;
			}
			else {
				arr[s[i] - 'a'] = i;
			}
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (arr[i] == 0) {
			arr[i] = -1;
		}
		else if (arr[i] == -2) {
			arr[i] = 0;
		}
		else {
			// nothing
		}
		cout << arr[i] << ' ';
	}
}
