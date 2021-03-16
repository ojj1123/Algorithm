#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
	FAST;
	int T;
	cin >> T;
	getchar();
	for (int i = 0; i < T; i++) {
		string s;
		getline(cin, s);
		int len = s.length();
		for (int j = 0; j < len; j++) {
			if (s[j] >= 'A'&&s[j] <= 'Z')
				s[j] = tolower(s[j]);
		}
		cout << s << "\n";
		bool flag = true;
		for (int j = 0; j <= len/2 - 1; j++) {
			if (s[j] != s[len - 1 - j]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}