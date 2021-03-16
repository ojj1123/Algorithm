#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;//재귀함수는 제한(limit)을 안두면 무한대로 계산을 한다. 주의하자.
	return n * factorial(n - 1);
}
int main() {
	int n;
	cin >> n;
	cout << factorial(n);

	return 0;
}