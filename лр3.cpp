#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251); // test comment
	SetConsoleOutputCP(1251);
    double a, b, c, x, F;

    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;
    cout << "Введіть значення x: ";
    cin >> x;


    int condition = 0;

    if (x - 1 < 0 && b - x != 0) {
        condition = 1;
    }
    else if (x - 1 > 0 && b + x == 0) {
        condition = 2;
    }
    else {
        condition = 3;
    }

    switch (condition)
    {
    case 1:
        F = a * x * x + b;
        cout << "Використано формулу: ax² + b" << endl;
        break;

    case 2:
        if (x != 0) {
            F = (x - a) / x;
            cout << "Використано формулу: (x - a)/x" << endl;
        }
        else {
            cout << "Помилка: ділення на нуль!" << endl;
            return 1;
        }
        break;

    case 3:
        if (c != 0) {
            F = x / c;
            cout << "Використано формулу: x/c" << endl;
        }
        else {
            cout << "Помилка: ділення на нуль!" << endl;
            return 1;
        }
        break;

    default:
        cout << "Невідома помилка!" << endl;
        return 1;
    }

    cout << fixed << setprecision(3);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "x = " << x << endl;
    cout << "F = " << F << endl;

    return 0;
}goo goo gaga
