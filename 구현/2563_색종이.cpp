#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool space[101][101] = { false, };
	int n;
	int rect[100][2] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rect[i][0] >> rect[i][1];
		int x = rect[i][0];
		int y = rect[i][1];
		for (int X = x; X < x + 10; X++) {
			for (int Y = y; Y < y + 10; Y++) {
				space[X][Y] = true;
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (space[i][j])
				sum++;
		}
	}
	cout << sum;
	

	return 0;
}