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
	int num[6] = { 0, };
	int n, money = 0;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		num[n - 1]++;
	}
	int temp = 0;
	for (int i = 0; i < 6; i++) {
		if (num[i] == 3) {
			money += (10000 + (i + 1) * 1000);
			break;
		}
		else if (num[i] == 2) {
			money += (1000 + (i + 1) * 100);
			break;
		}
		else if (num[i] == 1) {
			temp++;
			if (temp == 3) {
				money += (i + 1) * 100;
			}
		}
	}

	cout << money;
	return 0;
}