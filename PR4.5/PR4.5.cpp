// Lab_04_5.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 4.5 
// «Попадання» у плоску фігуру
// Варіант 1
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x;
	double y;
	double R;
	cout << "R = "; cin >> R;
	//  1) спосіб
	for (int i = 0; i <= 10; i++) {
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y * y <= R * R - x * x && y >= x && x >= 0) ||
			(y * y <= R * R - x * x && y <= x && x <= 0)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	//2) спосіб
	cout << fixed;
	srand((unsigned)time(NULL));

	for (int i = 0; i <= 10; i++) {
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;
		if ((y * y <= R * R - x * x && y >= x && x >= 0) ||
			(y * y <= R * R - x * x && y <= x && x <= 0)) {
			cout << setw(8) << setprecision(4) << x << "  "
				<< setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		}
		else {
			cout << setw(8) << setprecision(4) << x << "  "
				<< setw(8) << setprecision(4) << y << "  " << "no" << endl;
		}
	}

	return 0;
}
