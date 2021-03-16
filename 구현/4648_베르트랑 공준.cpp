//4948_베르트랑 공준
//에라토스테네스의 체
#include <iostream>
#include <math.h>
using namespace std;


int main() {
	//n<k<=2n
	int n;
	int count = 0;

	do {
		cin >> n;
		if (n == 1 || n == 2)
			count = 1;
		else {
			for (int i = 2; i < sqrt((double)(2 * n)); i++) {
				if (n%i)
			}
		}
		cout << count;
	} while (n != 0);

	return 0;
}