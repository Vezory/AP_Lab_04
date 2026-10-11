// Lab_04_2.cpp
// Новосад Захарій
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 16
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, x, A, B, y;

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
        A = 5.0 * exp(3.0 * x);

        if (x < -1.0)
            B = sqrt(2.0) * (x * x * x) - 7.0;
        else if (x < 3.0)
            B = 2.0 * log10(1.0 - x / 4.0);
        else
            B = cos(abs(x)) + 3.0;

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(12) << setprecision(3) << y << "    |" << endl;

        x += dx;
    }
    cout << "-----------------------------" << endl;

    return 0;
}