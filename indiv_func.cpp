#include <iostream>
#include <cmath>

using namespace std;

int degree(int element, int min) {
	return pow(element, min);
}

int main() {
	int n, m; // size of matrix
	cout << "Enter N: ";
	cin >> n;
	cout << "Enter M: ";
	cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}

	for (int i = 0; i < n; i++) {
		int min = a[i][0];
		for (int j = 0; j < m; j++)
			if (min > a[i][j]) min = a[i][j];
		for (int k = 0; k < m; k++)
			if (a[i][k] % 2) a[i][k] = degree(a[i][k], min);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
