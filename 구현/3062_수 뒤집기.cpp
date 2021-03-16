//3062_수 뒤집기
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
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		int temp = n, rev = 0;
		while (temp > 0) {
			rev *= 10;
			rev += temp % 10;
			temp /= 10;
		}
		int sum = n + rev;
		string num;
		while (sum > 0) {
			num += sum % 10;
			sum /= 10;
		}
		bool check = true;
		int len = num.length();
		for (int k = 0; k < len; k++) {
			if (num[k] != num[len - k - 1]) {
				check = false;
				break;
			}
		}
		cout << (check ? "YES" : "NO") << "\n";
	}
	return 0;
}