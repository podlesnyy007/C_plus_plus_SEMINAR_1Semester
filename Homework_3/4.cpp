/*
Функция увеличивает первый аргумент на второй
*/

#include <iostream>
using namespace std;

void f(int &x, int y) {
    x += y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    f(a, b);
    cout << a << b;
}
