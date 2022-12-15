/*
Прочитать массив из n чисел, заменить последние 3 элемента на -1 и вывести
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = n - 1; i > n - 4; i--)
		a[i] = -1;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[] a;
}
