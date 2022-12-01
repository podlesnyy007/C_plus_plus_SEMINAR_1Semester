#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    float x, n = 0;
    int k, factorial = 1;
    cout << "k = ";  cin >> k;
    cout << "x = "; cin >> x;
    for (int i = 1; i <= k; i++) {
        factorial *= i;
        n += factorial * pow(x, 2 * i + 1);
    }
    cout << n;
}
