/*
Функция меняет -а на а и возвращает true, если а != 0 и false, если а = 0
(использовать передачу по ссылке
*/

#include <iostream>
using namespace std;

int f(int &a) {
    if (a != 0) {
        a *= -1;
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int a;
    cin >> a;
    cout << f(a) << endl;
    cout << a;
}
