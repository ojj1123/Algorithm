#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
	FAST;
	int n, i = 0;
	int arr[10] = { 0, };
	cin >> n;
	while (n != 0) {
		int r = n % 10;
		arr[i] = r;
		n -= r;
		n /= 10;
		i++;
	}
	for (int j = 0; j < i; j++) {
		for (int k = j+1; k < i; k++) {
			if (arr[j] < arr[k]) {
				int temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int j = 0; j < i; j++)
		cout << arr[j];
	return 0;
}