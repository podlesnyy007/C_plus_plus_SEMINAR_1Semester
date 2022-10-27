/*
Вводим число от 1 до 4. Выводим направление: 1-направо, 2-вверх, 3-вправо, 4-вниз
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cin >> x;
    switch (x) {
    case 1:
        cout << "направо";
        break;
    case 2:
        cout << "вверх";
        break;
    case 3:
        cout << "вправо";
        break;
    case 4:
        cout << "вниз";
        break;
    }
}
