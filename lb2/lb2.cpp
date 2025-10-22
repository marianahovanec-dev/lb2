#include <iostream>
#include <cmath> 
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    cout << "Введіть x: ";
    cin >> x;

    if (x < 2)
        y = 2 * x;
    else if (x >= 2 && x < 10)
        y = 1 - 3 * x;
    else
        y = 5 * sin(x);

    cout << "y = " << y << endl;
    return 0;
}
