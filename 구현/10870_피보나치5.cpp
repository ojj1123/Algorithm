#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int fibo(int n) {
	if (n == 0 || n == 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	FAST;
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}