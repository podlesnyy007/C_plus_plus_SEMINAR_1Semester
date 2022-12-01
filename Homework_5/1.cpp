#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    float b1 = 1, b2 = 2, bn;
    int n;
    cout << "n = ";  cin >> n;
    cout << b1 << " " << b2 << " ";
    for (int i = 3; i <= n; i++) {
        bn = b2 / (b1 + 1);
        b1 = b2;
        b2 = bn;
        cout << bn << " ";
    }
}
