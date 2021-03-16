#include <iostream>
using namespace std;

int main() {
	double r;
	double pi = 3.14159265358979323846264338327950288;
	scanf("%lf", &r);
	printf("%.06f\n%.06f", pi*r*r, 2 * r*r);
	return 0;
}