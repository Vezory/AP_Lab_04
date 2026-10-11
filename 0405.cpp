// Lab_04_5.cpp
// Новосад Захарій
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 16
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double x, y;

    // 1 спосіб: введення координат 10 точок з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if (y <= -x * x + 2.0 && ((y >= 0.0 && y <= x) || (y <= 0.0 && y >= x)))
            cout << "tak" << endl;
        else
            cout << "ni" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: генерація 10 точок з випадковими координатами в [-2, 2]
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        x = 4.0 * rand() / RAND_MAX - 2.0;
        y = 4.0 * rand() / RAND_MAX - 2.0;

        if (y <= -x * x + 2.0 && ((y >= 0.0 && y <= x) || (y <= 0.0 && y >= x)))
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "tak" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "ni" << endl;
    }

    return 0;
}