// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -5)
		y = -3;
	else
		if (-5 < x && x <= -R)
			y = 3.0 * (R + x) / (5.0 - R);
		else
			if (-R < x && x <= R)
				y = sqrt(R * R - x * x);
			else
				if (R < x && x <= 8)
					y = R * (x - R) / (8.0 - R);
				else
					y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}