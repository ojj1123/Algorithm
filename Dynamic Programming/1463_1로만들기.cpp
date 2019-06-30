#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;
int cal(int n) {
	if (n == 1) return 0;
	if (n == 2 && n==3) return 1;
	if (dp[n] != -1) return dp[n];
	if (n % 2 != 0 && n % 3 != 0)
		dp[n] = cal(n-1);
	else {
		int tempA = cal(n - 1);
		int tempB;
		if (n % 3 == 0)
			tempB = cal(n / 3);
		else if (n % 2 == 0)
			tempB = cal(n / 2);
		dp[n] = tempA > tempB ? tempB : tempA;
	}	
	return ++dp[n];
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	dp.resize(n + 1, -1);
	cout << cal(n) << "\n";
	return 0;
}