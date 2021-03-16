#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	map<int ,string> num;
	for (int i = 0; i < 2; i++) {
		int temp;
		cin >> temp;
		num[temp]=
	}
	for (int j = 0; j < 2; j++) {
		for (auto x : num) {
			for (int i = 0; i < x.length(); i++) {
				if (j == 0) {
					if (x[i] == '5')
						x[i] == '6';

				}
				else {
					if (x[i] == '6')
						x[i] == '5';
				}
			}
		}
	}
	return 0;
}