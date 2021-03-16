#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define N 1000000

int main() {
	FAST;
	int m, n;
	cin >> m >> n;
	vector<int>prime = { 1,1, };//1 : Not Prime
	prime.resize(N + 1);
	for (int i = 2; i <= n; i++) {
		if (prime[i]) continue;//Not prime

		for (int j = i * 2; j <= n; j += i) {
			prime[j] = 1;
		}
	}
	for (int i = m; i <= n; i++)
		if (!prime[i])
			cout << i << "\n";
	return 0;
}