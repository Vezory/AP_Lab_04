// Lab_04_6.cpp
// Новосад Захарій
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P;
    int i, j;

    // 1) спосіб: while всередині while
    P = 1.0;
    i = 1;
    while (i <= 3)
    {
        j = 1;
        while (j <= 4 - i)
        {
            P *= sqrt(abs(tan(1.0 * i))) / (i + j * j);
            j++;
        }
        i++;
    }
    cout << P << endl;

    // 2) спосіб: do-while всередині do-while
    P = 1.0;
    i = 1;
    do {
        j = 1;
        do {
            P *= sqrt(abs(tan(1.0 * i))) / (i + j * j);
            j++;
        } while (j <= 4 - i);
        i++;
    } while (i <= 3);
    cout << P << endl;

    // 3) спосіб: for++ всередині for++
    P = 1.0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            P *= sqrt(abs(tan(1.0 * i))) / (i + j * j);
        }
    }
    cout << P << endl;

    // 4) спосіб: for-- всередині for--
    P = 1.0;
    for (i = 3; i >= 1; i--)
    {
        for (j = 4 - i; j >= 1; j--)
        {
            P *= sqrt(abs(tan(1.0 * i))) / (i + j * j);
        }
    }
    cout << P << endl;

    return 0;
}