#include <iostream>

using namespace std;

int main() {
	int n; // size of matrix
	int mul = 1; // multiple of elements
	cout << "Enter N: ";
	cin >> n;
	int a[100][100]; // create a matrix
	// input a matrix
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int count = 0;
			// find count fo numbers
			for (int k = a[i][j]; k; k /= 10) {
				count++;
			}
			cout << count << " ";
			if (i < n - j - 1) {
				if (a[i][j] % 2 == 0 && count % 2) mul *= a[i][j];
			}
		}
	}
	cout << mul;
	return 0;
}
