#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	char yut[5] = { 'D', 'C', 'B', 'A', 'E' };
	for (int i = 0; i < 3; i++) {
		cin >> a >> b >> c >> d;
		cout << yut[a + b + c + d] << "\n";
	}

	return 0;
}