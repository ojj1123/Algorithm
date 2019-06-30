#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <deque>
#include <utility>
#include <algorithm>
using namespace std;

int dp[21][21][21];
int w(int a, int b, int c) {
	if(dp[a][b][c]!=0) return dp[a][b][c];
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	else if (a > 20 || b > 20 || c > 20) {
		a = 20, b = 20, c = 20;
		dp[a][b][c] = w(20, 20, 20);
	}
	else if (a < b&&b < c)
		dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else
		dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return dp[a][b][c];
}
int main() {
	//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1)
			break;
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	}
	

	return 0;
}