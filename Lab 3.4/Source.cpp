// Lab_03_4.cpp
// < Меньшиков Дмитро >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 15
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний параметр
	double y; // вхідний параметр  
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (((y <= sqrt(pow(x, 2) - 2 * x * R + pow(R, 2))) && x >= R && x <= 0 && x <= 0 && y >= 0) || (y >= -R && x >= 0 && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
