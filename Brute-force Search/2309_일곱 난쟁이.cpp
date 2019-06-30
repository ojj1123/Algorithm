#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector<int> height(9);
	int sum = 0, flag = 0;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}
	sort(height.begin(), height.end());
	for (int i = 0; i < 9; i++) {
		int temp = sum;
		temp -= height[i];
		for (int j = i + 1; j < 9; j++) {
			int temp2 = temp;
			temp2 -= height[j];
			if (temp2 == 100) {
				flag = 1;
				height[i] = -1, height[j] = -1;
				break;
			}
		}
		if (flag) break;
	}
	for (int i = 0; i < 9; i++) {
		if (height[i] != -1)
			cout << height[i] << "\n";
	}
	return 0;
}