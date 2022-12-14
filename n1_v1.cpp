#include <iostream>

using namespace std;

int main() {
	int a[100]; // инициализация массива
	int n, max, count_j = 0, sum_5 = 0; // кол-во эл-тов массива, макс. эл-т массива, количество совершенных, сумма кратных 5
	cout << "N: ";
	cin >> n;
  // ввод массива
	for (int i = 0; i < n; i++)
		cin >> a[i];
  // нахлждение максимума
	max = a[0]; 
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
  // кол-во совершенных элементов
	for (int i = 0; i < n; i++) {
		int sum_div = 0;
		for (int j = 1; j <= a[i]; j++) 
			if (a[i] % j == 0) sum_div += j;
		if (sum_div == a[i]) count_j++;
	}
  // если кол-во совершенных эл-тов четно, заменяем отриц. элементы на макс. элементы
	for (int i = 0; i < n; i++) {
		if (count_j % 2 == 0)
			if (a[i] < 0) a[i] = max;
	}
  // иначе, сумма эл-тов краиных 5
	for (int i = 0; i < n; i++)
		if (a[i] % 5 == 0) sum_5 += a[i];

	cout << "Summa: " << sum_5 << endl;
  // вывод массива
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
