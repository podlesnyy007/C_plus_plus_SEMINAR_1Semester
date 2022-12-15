/*
Прочитать массив из n строк и m столбцов и посчитать отрицательные элементы.
*/

#include <iostream>
using namespace std;

int** f(int& n, int& m) {
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mas[i][j];
	return mas;
}

int main()
{
	int n, m, k = 0;
	int** a = f(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] < 0)
				k++;
	cout << k;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}
