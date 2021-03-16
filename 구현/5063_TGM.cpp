//단순 조건문 문제
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, r, e, c;//r은 광고를 하지 않았을 때 수익, e는 광고를 했을 때의 수익, c는 광고 비용
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> r >> e >> c;
		if (r == e - c)
			cout << "does not matter\n";
		else if (r < e - c)
			cout << "advertise\n";
		else if (r > e - c)
			cout << "do not advertise\n";
	}
	return 0;
}