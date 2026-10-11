// Lab_04_4.cpp
// Новосад Захарій
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 16
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R1, R2, xp, xk, dx, x, y;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(7) << "x" << "   |"
        << setw(12) << "y" << "    |" << endl;
    cout << "-----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -R1)
            y = (-R1 / (2.0 - R1)) * (x + 2.0);
        else if (x <= 0.0)
            y = -R1 + sqrt(R1 * R1 - x * x);
        else if (x <= R2)
            y = R2 - sqrt(R2 * R2 - x * x);
        else if (x <= 4.0)
            y = -R1;
        else
            y = (R1 / 2.0) * (x - 6.0);

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(12) << setprecision(3) << y << "    |" << endl;

        x += dx;
    }
    cout << "-----------------------------" << endl;

    return 0;
}