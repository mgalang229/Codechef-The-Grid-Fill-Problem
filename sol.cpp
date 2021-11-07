#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// fill all the cells with -1
		// if the n is odd, then we need to fill the cells in the main diagonal with 1s
		
		// case 1: n is even
		// if we have a row: {-1, -1, -1, -1}
		// sum = (-1) + (-1) + (-1) + (-1) = -4
		// product = (-1)(-1)(-1)(-1) = 4
		// sum * product = (-4)(4) = -16 (less than 0, so it passes the condition)
		// note: the same principle applies to columns because this is a square matrix
		
		// case 2: n is odd (we need to put 1s in the main diagonal)
		// without placing 1s in the main diagonal:
		// if we have a row: {-1, -1, -1, -1, -1}
		// sum = (-1) + (-1) + (-1) + (-1) + (-1) = -5
		// product = (-1)(-1)(-1)(-1)(-1) = -1
		// sum * product = (-5)(-1) = 5 (greater than 0, so it fails the condition)
		
		// placing 1s in the main diagonal (it means we have 1 in every row and column)
		// if we have a row: {1, -1, -1, -1, -1}
		// sum = 1 + (-1) + (-1) + (-1) + (-1) = -4
		// product = (1)(-1)(-1)(-1)(-1) = 1
		// sum * product = (-4)(1) = -4 (less than 0, so it passes the condition)
		// note: the same principle applies to columns because this is a square matrix
		
		vector<vector<int>> a(n, vector<int>(n, -1));
		if (n & 1) {
			for (int i = 0; i < n; i++) {
				a[i][i] = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}
