#include <iostream>

using namespace std;

int main() {
	int n; // count elements
	cout << "Enter N: ";
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max_abs = a[0];
	for (int i = 0; i < n; i++)
		if (abs(max_abs) < abs(a[i])) max_abs = abs(a[i]);

	for (int i = 0; i < n; i++)
		if (a[i] > 0 && i % 2 == 0) a[i] = max_abs;
	
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
