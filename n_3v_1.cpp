#include <iostream>

using namespace std;

int main() {
	int n; // row of matrix
	int m; // column of matrix
	cout << "Enter N: ";
	cin >> n;
	cout << "Enter M: ";
	cin >> m;
	int a[100][100]; // create a matrix
	// input matrix
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	int x; // number X
	cout << "Enter X: ";
	cin >> x;
	int b[100]; // array of 1 or 0
	// first, it counts the sum, then checks with X and puts either 1 or 0 in a new array
	for (int j = 0; j < m; j++) {
		int row = 0;
		for (int i = 0; i < n; i++)
			row += a[i][j];
		if (row < x) b[j] = 1;
		else b[j] = 0;
	}
	
	
	// output a new array
	cout << endl << endl;
	for (int j = 0; j < m; j++)
		cout << b[j] << " ";
	return 0;
}
