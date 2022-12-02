#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    /*int i = 1;
    float e, s = 0, f = 1, a = 0;
    cout << "e = "; cin >> e;
    while (fabs(a) >= e) {

    }*/

    double e, x, sum = 0, a = 0;
    cout << "e = "; cin >> e;
    cout << "x = "; cin >> x;
    int f = 2; // f - факториал (2i)!
    for (int i = 2; a >= e; i++) {
        f *= (i + 1) *(i + 2);
        sum += a;
        f *= 2 * i;
        a = i * (i - 1) * (pow(x, 2 * i) / f);
    }
    cout << sum;
}
