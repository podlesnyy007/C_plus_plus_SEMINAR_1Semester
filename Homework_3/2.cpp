/*
Даны массы 3 материальных точек и расстояния между ними.
Определить 2 большие силы притяжения, действующие между точками
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>

double f(double m1, double m2, double r) {
    double g = 6.67 * pow(10, -11); // гравитационная постоянная
    return g * m1 * m2 / pow(r, 2); // сила притяжения
}

int main()
{
    setlocale(LC_ALL, "Rus");
    double m1, m2, m3, r1, r2, r3;
    cout << "Введите массы 3 материальных точек" << endl;
    cin >> m1 >> m2 >> m3;
    cout << "Введите расстояние между точками" << endl;
    cin >> r1 >> r2 >> r3;
    double x = f(m1, m2, r1);
    double y = f(m1, m3, r2);
    double z = f(m2, m3, r3);
    cout << "Самая большая сила притяжения: " << max({ x, y, z }) << endl;
    cout << "Средняя сила притяжения: " << x + y + z - max({ x, y, z }) - min({ x, y, z });
}
