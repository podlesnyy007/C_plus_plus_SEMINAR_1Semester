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
