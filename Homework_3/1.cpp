/*
1) Сторона р/с треугольника по его площади
2) Вычислить гипотенузу р/б прямоугольного треугольника  по катету
3) Найти периметр прямоугольного треугольника по площади р/с треугольника (используя функцию 1 и 2
*/

#include <iostream>
using namespace std;
#include <cmath>

double storona(double x) {
    return sqrt(4 * x / sqrt(3));
}

double gipotenuza(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double perimetr(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2)) + x + y;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число: ";
    double  a;
    cin >> a;
    cout << storona(a) << endl;
    cout << gipotenuza(a, a) << endl;
    cout << perimetr(a, a) << endl;
}
