#include <iostream>
using namespace std;

int main() {
	unsigned int s, temp = 0 , i = 1;
	cin >> s;
	while (1) {
		temp += i;
		if (temp > s)
			break;
		++i;
	}
	cout << i-1;

	return 0;
}//시간초과