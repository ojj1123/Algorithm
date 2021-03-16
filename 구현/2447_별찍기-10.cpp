//재귀함수
#include <iostream>
#include <math.h>
using namespace std;

void three() {
	int i;
	for (i = 1; i <= 3; i++) {
		if (i == 2)
			cout << "* *";
		else
			cout << "***";
		cout << "\n";
	}
}
void pattern(int n) {
	int i, j, k;
	for (i = 0; i < n / 3; i++) {
		if(i%2==1)
	}
}
int main() {
	int n;
	cin >> n;

	three();

	return 0;
}

// #include <stdio.h>

// char s[6561][6562];
// void dfs(int x, int y, int n, char c){
// 	if (n ==1) { s[x][y]=c; return ; }

// 	int a[3] = {0, n/3, 2*n/3};

// 	for (int i=0; i<3; i++){
// 		for (int j=0; j<3; j++){
// 			if(c=='*')	dfs(x+a[j], y+a[i], n/3, (i==1&&j==1)?' ':'*');
// 			else dfs(x+a[j], y+a[i], n/3, ' ');
// 		}
// 	}

// }
// int main(){
// 	int n; scanf("%d", &n);
// 	dfs(0, 0, n, '*');
// 	for (int i=0; i<n; i++){
// 		for (int j=0; j<n; j++){
// 			printf("%c", s[i][j]);
// 		}
// 		printf("\n");
// 	}
// }