/*
Написать программу, проверяющую, сколько корней у квадратного уравнения, а!=0
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cin >> a >> b >> c;
    int d = pow(b, 2) - 4 * a * c;
    if(d == 0)
        cout << "один корень";
    if(d > 0)
        cout << "два корня";
    if (d < 0)
        cout << "нет корней";
}
