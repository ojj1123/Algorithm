#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	int car[5];
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cin >> car[i];
		if (n == car[i])
			cnt++;
	}
	cout << cnt;

	return 0;
}