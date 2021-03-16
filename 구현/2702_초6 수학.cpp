//2702_초6수학(최대공약수, 최소공배수)
//최대공약수->유클리드 호제법으로 구해보기
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
	FAST;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int tempA = a;
		int tempB = b;
		int gcd = 1;
		int lcm;

		for (int j = (a > b ? b : a); j > 1; j--) {
			if (tempA % j == 0 && tempB % j == 0) {
				tempA /= j; tempB /= j;
				gcd *= j;
			}
		}
		lcm = a * b / gcd;
		cout << lcm << " " << gcd << "\n";
	}
	return 0;
}