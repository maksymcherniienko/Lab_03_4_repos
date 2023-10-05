// Lab_03_4.cpp
// Чернієнко Максима
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 25
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x <= 0 && y <= x + R && y >= 0) ||
		(x >= 0 && pow(y, 2) >= pow(R, 2) - pow(x, 2) && y <= 0) ||
		(x <= 0 && pow(y, 2) >= pow(R, 2) - pow(x, 2) && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}