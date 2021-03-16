#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int maxIndex(int *ptr);

int main() {
	int i, index;
	int alpha[26] = { 0, };
	string s;

	getline(cin, s);//cin사용
	for (i = 0; s[i] != NULL; i++)
		s[i] = tolower(s[i]);

	i = 0;
	while (s[i] != NULL) {
		for (char c = 'a'; c <= 'z'; c++) {
			if (s[i] == c) {
				index = (int)c - 97;
				alpha[index]++;
			}
		}
		i++;
	}

	if (maxIndex(alpha) < 0)
		cout << '?' << endl;
	else
		cout << (char)(maxIndex(alpha) + 'A') << endl;

	return 0;
}

int maxIndex(int *ptr) {
	int i, max_index = 0;

	for (i = 1; i < 26; i++) {
		if (ptr[i] > ptr[max_index])
			max_index = i;
	}


	for (i = 0; i < 26; i++)
		if (max_index == i)
			continue;
		else if (ptr[max_index] == ptr[i]) {
			max_index = -1;
			break;
		}

	return max_index;
}