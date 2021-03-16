#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	char **s = new char*[15];
	for (int i = 0; i < 5; i++)
		s[i] = new char[15]{ '\0', };
	for (int i = 0; i < 5; i++)
		cin >> s[i];
	
	int max_index = 0;
	for (int i = 1; i < 5; i++) {
		if (strlen(s[max_index])< strlen(s[i]))
			max_index = i;
	}
	for (int j = 0; j < strlen(s[max_index]); j++) {//column
		for (int i = 0; i < 5; i++) {//row
			if (s[i][j] == NULL)
				cout << "";
			else
				cout << s[i][j];
		}
	}
	cout << "\n";
	return 0;
}