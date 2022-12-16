#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cout << "Enter N: ";
	cin >> n;
	int a[100][100]; //create matrix
	int sum = 0;
	int count = 0;
	// input matrix
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	int min_row = 0; // min-sum row
	// find min-sum row
	for (int i = 0; i < n; i++)
		min_row += a[0][i];
	for (int i = 0; i < n; i++) {
		int row = 0; // sum of elements in row
		for (int j = 0; j < n; j++) {
			row += a[i][j];
		}
		if (min_row > abs(row)) min_row = row;
	}
	// sum and count of elements on main diagonal
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i < n - j - 1) {
				sum += a[i][j];
				count++;
			}
	// arithmetic mean
	int middle = sum / count;
	// first, it counts the sum of the line, then checks with the minimum
	for (int i = 0; i < n; i++) {
		int row = 0;
		for (int k = 0; k < n; k++)
			row += a[i][k];
		for (int j = 0; j < n; j++)
			if (min_row == row) a[i][j] += middle;
	}
	
	// test info
	cout << "Middle: " << middle << " | Min row: " << min_row << endl;

	// output matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
