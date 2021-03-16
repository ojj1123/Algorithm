#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int i, count = 0;

	cin >> str;
	for (i = 0; i < str.length(); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				i += 1;
			}
			count++;
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				i += 1;
			}
			count++;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				i += 1;
			}
			count++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == 'z'&&str[i + 2] == '=') {
				i += 2;
			}
			else if (str[i + 1] == '-') {
				i += 1;
			}
			count++;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				i += 1;
			}
			count++;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				i += 1;
			}
			count++;
		}
		else
			count++;
	}

	cout << count << endl;

	return 0;
}