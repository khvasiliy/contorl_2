#include <iostream>

using namespace std;

int main() {
	int n; // count elements
	cout << "Enter N: ";
	cin >> n;
	int a; // self element
	int sum = 0;
	while (n) {
		cin >> a; // input element
		// check for the persence 7  
		for (int i = a; i; i /= 10) {
			if (i % 10 == 7) sum += a; // if 7, a add to sum
		}
		n--; // step of while
	}
	cout << sum;
	return 0;
}
