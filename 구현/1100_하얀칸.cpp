#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ALL(a) (a).begin(),(a).end()

int main() {
	FAST;
	int count = 0;
	string *s = new string[8];
	for (int i = 0; i < 8; i++)
		cin >> s[i];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < s[i].length(); j++)
			if (s[i][j] == 'F')
				if ((i + j) % 2 == 0)
					count++;

	cout << count;

	return 0;
}