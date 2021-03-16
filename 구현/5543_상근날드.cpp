#include <iostream>
using namespace std;


int main() {
	int a;
	int min1 = 0, min2 = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (i == 0)
			min1 = a;
		else if (i > 0 && i < 3){
			if (min1 >= a)
				min1 = a;
			else
				continue;
		}
		else if (i == 3)
				min2 = a;
		else if (i > 3)
			if (min2 >= a)
				min2 = a;
	}
	cout << min1 + min2 - 50;

	return 0;
}