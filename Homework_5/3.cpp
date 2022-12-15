/*
Распечатать индексы 0-ых элементов.
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0)
			cout << i << " ";
	}
}
