/*
Вывести n чисел Фибоначчи в обратном порядке.
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	int x = 1, y = 1;
	a[0] = x;
	a[1] = y;
	for (int i = 2; i < n; i++) {
		a[i] = x + y;
		x = y;
		y = a[i];
	}
	for (int i = n - 1; i >= 0; i--)
		cout << a[i] << " ";
}
