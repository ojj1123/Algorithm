#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;
int fibo(int n) {
	if (n <= 1)	return n;
	if (dp[n] != -1) return dp[n];
	dp[n] = fibo(n - 1) + fibo(n - 2);
	return dp[n];
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	dp.resize(41, -1);
	for (int j = 0; j < t; j++) {
		int temp0, temp1;
		cin >> n;
		if (n == 0)
			temp0 = 1, temp1 = 0;
		else
			temp0 = fibo(n-1), temp1 = fibo(n);
		cout << temp0 << " " << temp1 << "\n";
	}
	return 0;
}