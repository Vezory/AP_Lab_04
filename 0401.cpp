// Lab_04_1.cpp
// Новосад Захарій
// Лабораторна робота № 4.1
// Цикли.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cout << "N = "; cin >> N;

    double S = 0;
    int j;

    // 1) спосіб: while
    S = 0;
    j = 2;
    while (j <= N)
    {
        S += (1.0 * j * (N - j)) / (1.0 * j * j + 1.0 * (N - j) * (N - j));
        j++;
    }
    cout << S << endl;

    // 2) спосіб: do-while
    S = 0;
    j = 2;
    do {
        S += (1.0 * j * (N - j)) / (1.0 * j * j + 1.0 * (N - j) * (N - j));
        j++;
    } while (j <= N);
    cout << S << endl;

    // 3) спосіб: for++
    S = 0;
    for (j = 2; j <= N; j++)
    {
        S += (1.0 * j * (N - j)) / (1.0 * j * j + 1.0 * (N - j) * (N - j));
    }
    cout << S << endl;

    // 4) спосіб: for--
    S = 0;
    for (j = N; j >= 2; j--)
    {
        S += (1.0 * j * (N - j)) / (1.0 * j * j + 1.0 * (N - j) * (N - j));
    }
    cout << S << endl;

    return 0;
}