/*
Длина окружности и площадь (S) круга радиуса R
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	const double PI = 3.14;
	int R;
	cin >> R;
	cout << R;
	cout << 2 * PI * R << endl; //длина окружности
	cout << PI * pow(R, 2) << endl; //площадь окружности
}
