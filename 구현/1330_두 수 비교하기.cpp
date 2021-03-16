#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
	FAST;
	int a, b;
	cin >> a >> b;
	cout << (a > b ? ">" : (a < b ? "<" : "=="));
	return 0;
}