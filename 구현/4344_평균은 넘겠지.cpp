#include <iostream>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		float sum = 0;
		int count = 0;
		cin >> num;
		float *score = new float[num];
		for (int j = 0; j < num; j++) {
			cin >> score[j];
			sum += score[j];
		}
		float avg = sum / num;
		for (int j = 0; j < num; j++)
			if (avg < score[j])
				count++;
		printf("%.3f%%\n", count*100.0 / num);
	}
	return 0;
}