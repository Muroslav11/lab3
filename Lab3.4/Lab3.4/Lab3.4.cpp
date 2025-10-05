// Lab_03_4.cpp
// Галика Мирослава
// Лабораторна робота №3.4
// Розгалуження, задане плоскою фігурою
// Варіант 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R;  // вхідний параметр — радіус кола
    double a;  // вхідний параметр — половина ширини прямокутника
    double b;  // вхідний параметр — половина висоти прямокутника

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    // розгалуження в повній формі
    if ((x * x + y * y <= R * R && x >= -a && x <= 0 && y >= -b && y <= 0) || 
        (x * x + y * y >= R * R && x >= 0 && x <= a && y >= 0 && y <= b))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}