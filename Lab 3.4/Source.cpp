// Lab_03_4.cpp
// < ��������� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 15
#include <iostream>
using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������  
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (((y <= sqrt(pow(x, 2) - 2 * x * R + pow(R, 2))) && x >= R && x <= 0 && x <= 0 && y >= 0) || (y >= -R && x >= 0 && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
