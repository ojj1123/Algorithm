#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;

int max(int arr[], int n) {
	if (n == 1)
		return arr[0];
	int maxVal = max(arr, n - 1);
	if (maxVal > arr[n - 1])
		return maxVal;
	else
		return arr[n - 1];

}

int main() {
	//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int arr[] = { 1,2,3,4,5,10,3,4,2,0 };//10개
	cout<<max(arr,10);
	return 0;
}