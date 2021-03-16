#include <iostream>
#include <string>
using namespace std;

int main() {
	int month, day;
	int *day_in_month = new int[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	string cday[7] = { "SUN", "MON","TUE","WED","THU","FRI","SAT" };

	cin >> month >> day;

	for (int i = 0; i < month - 1; i++)
		day += day_in_month[i];

	cout << cday[day % 7];

	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	int month, day, sum_day = 0;
// 	int *day_in_month = new int[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
// 	string cday;

// 	cin >> month >> day;

// 	for (int i = 0; i < month; i++) {
// 		if (i == month - 1) {
// 			sum_day += day;
// 		}
// 		else
// 			sum_day += day_in_month[i];
		
// 	}
// 	switch (sum_day%7){
// 	case 0:
// 		cday = "SUN";
// 		break;
// 	case 1:
// 		cday = "MON";
// 		break;
// 	case 2:
// 		cday = "TUE";
// 		break;
// 	case 3:
// 		cday = "WED";
// 		break;
// 	case 4:
// 		cday = "THU";
// 		break;
// 	case 5:
// 		cday = "FRI";
// 		break;
// 	case 6:
// 		cday = "SAT";
// 		break;
// 	}
// 	cout << cday;

// 	return 0;
// }

