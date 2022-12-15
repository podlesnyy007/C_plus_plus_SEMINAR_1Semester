/*
В квадратной матрице поменять местами элементы в основной и побочной диагоналей
*/

#include <iostream>
using namespace std;

int** f(int& n) {
	cout << "n = "; cin >> n;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mas[i][j];
	return mas;
}

int main()
{
	int n;
	int** a = f(n);
	for (int i = 0; i < n; i++) {
		int x = a[i][n - i - 1];
		a[i][n - i - 1] = a[i][i];
		a[i][i] = x;
	}
	cout << endl;
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}
