#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, i, j, len;
	int count = 0;
	string s;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s;
		len = s.length();
		bool alpha[26] = { false, };
		if (len == 1 || len == 2)
			count++;
		else {
			for (j = 0; j < len; j++) {
				int index = s[j] - 'a';
				if (!alpha[index])
					alpha[index] = true;
				else {
					if (j == 0)
						continue;
					else {
						if (s[j] != s[j - 1])
							break;
					}
				}
			}//for
			if (j == len)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}