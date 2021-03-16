#include <iostream>
#include <math.h>
using namespace std;

#define ERROR 1.0e-10

int InverseMatrix(double **work, double **result, int n);
int CopyArray2D(double **source, double **target, int n);
int determ(double **Matrix, int n);

int main() {
	int row, column, i, j;
	cin >> row;
	column = row;

	double **m = new double*[row];
	double **res = new double*[row];

	for (i = 0; i < row; i++) {
		m[i] = new double[column];
		res[i] = new double[column];
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			cin >> m[i][j];
		}
	}
	if (determ(m, row)) {
		printf("no inverse");
		exit(1);
	}
	else {
		InverseMatrix(m, res, row);
		for (i = 0; i < row; i++) {
			for (j = 0; j < column; j++)
				cout << res[i][j] << " ";
			cout << "\n";
		}
	}

	for (i = 0; i < row; i++)
		delete[] m[i];
	delete[] m;

	return 0;
}

int InverseMatrix(double **work, double **result, int n) {
	int i, j, k;
	double constant;

	double **tmpWork = new double*[n];
	for (i = 0; i < n; i++)
		tmpWork[i] = new double[n];

	CopyArray2D(work, tmpWork, (n*n));

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			result[i][j] = (i == j) ? 1 : 0;

	/* 대각 요소를 0 이 아닌 수로 만듦 */
	for (i = 0; i<n; i++)
		if (-ERROR < tmpWork[i][i] && tmpWork[i][i] < ERROR) {
			for (k = 0; k<n; k++) {
				if (-ERROR < tmpWork[k][i] && tmpWork[k][i] < ERROR) continue;
				for (j = 0; j<n; j++) {
					tmpWork[i][j] += tmpWork[k][j];
					//result[i*n + j] += result[k*n + j];
					result[i][j] += result[k][j];
				}
				break;
			}
			if (-ERROR < tmpWork[i][i] && tmpWork[i][i] < ERROR) return 0;
		}

	/* Gauss-Jordan elimination */
	for (i = 0; i<n; i++) {
		// 대각 요소를 1로 만듦 
		constant = tmpWork[i][i];      // 대각 요소의 값 저장 
		for (j = 0; j<n; j++) {
			tmpWork[i][j] /= constant;   // tmpWork[i][i] 를 1 로 만드는 작업 
			//result[i*n + j] /= constant;   // i 행 전체를 tmpWork[i][i] 로 나눔 
			result[i][j] /= constant;
		}

		// i 행을 제외한 k 행에서 tmpWork[k][i] 를 0 으로 만드는 단계 
		for (k = 0; k<n; k++) {
			if (k == i) continue;      // 자기 자신의 행은 건너뜀 
			if (tmpWork[k][i] == 0) continue;   // 이미 0 이 되어 있으면 건너뜀 

												// tmpWork[k][i] 행을 0 으로 만듦 
			constant = tmpWork[k][i];
			for (j = 0; j<n; j++) {
				tmpWork[k][j] = tmpWork[k][j] - tmpWork[i][j] * constant;
				//result[k*n + j] = result[k*n + j] - result[i*n + j] * constant;
				result[k][j] = result[k][j] - result[i][j] * constant;
			}
		}
	}

	return 0;
}

int CopyArray2D(double **source, double **target, int n) {
	if (n < 1) return (-1);

	int i;
	for (i = 0; i<n; i++)
		target[i] = source[i];

	return 0;
}

int determ(double **a, int n) {
	int det = 0, p, h, k, i, j;
	double **temp = new double*[n];

	for (i = 0; i < n; i++)
		temp[i] = new double[n];

	if (n == 1) {
		return a[0][0];
	}
	else if (n == 2) {
		det = (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
		return det;
	}
	else {
		for (p = 0; p<n; p++) {
			h = 0;
			k = 0;
			for (i = 1; i<n; i++) {
				for (j = 0; j<n; j++) {
					if (j == p) {
						continue;
					}
					temp[h][k] = a[i][j];
					k++;
					if (k == n - 1) {
						h++;
						k = 0;
					}
				}
			}
			det = det + a[0][p] * pow(-1, p)*determ(temp, n - 1);
		}
		return det;
	}
}//메모리 초과