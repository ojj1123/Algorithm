#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;

// int gcd(int a, int b) {
// 	int i = min(a, b);
// 	while (1) {
// 		if (a%i == 0 && b%i == 0)
// 			return i;
// 		i--;
// 	}
// }
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cout << gcd(60, 24);
	return 0;
}