#include <iostream>
#include <cstring>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
	FAST;
	char s[501];
	cin.getline(s, 500);
	while (strcmp(s, "END")) {
		for (int i = strlen(s)-1; i >= 0; i--) {
			cout << s[i];
		}
		cout << "\n";
		cin.getline(s, 500);
	}
	
	return 0;
}