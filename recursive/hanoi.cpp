#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;

void hanoi(int n, int from_pos, int to_pos, int aux_pos) {
	if (n == 1) {
		cout << from_pos << "->" << to_pos << "\n";
		return;
	}
	hanoi(n - 1, from_pos, aux_pos, to_pos);
	cout << from_pos << "->" << to_pos << "\n";
	hanoi(n - 1, aux_pos, to_pos, from_pos);

}
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	hanoi(4, 1, 3, 2);
	return 0;
}