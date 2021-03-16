#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		if (i < n) {
			for (int j = 0; j < n; j++) {
				if (j < n - i - 1)
					cout << " ";
				else
					cout << "*";
			}
		}
		else
			for (int j = 0; j < n; j++) {
				if (j<=i-n)
					cout << " ";
				else
					cout << "*";
			}
		cout << "\n";
	}

	return 0;
}