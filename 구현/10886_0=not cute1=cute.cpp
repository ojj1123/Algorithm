#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, anw, cnt1 = 0, cnt0 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> anw;
		if (anw == 1)
			cnt1++;
		else
			cnt0++;
	}
	if (cnt1 > cnt0)
		cout << "Junhee is cute!\n";
	else
		cout << "Junhee is not cute!\n";
	return 0;
}//easy problem