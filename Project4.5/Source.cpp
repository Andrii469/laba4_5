#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if (((x + R) * (x + R) + (y - R) * (y - R) <= (R * R)) ||
			0 <= x && x <= R && 0 <= y && y <= -R)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)

	{
		x = (2 * (2 * R)) * rand() / RAND_MAX - (2 * R);
		y = (2 * (2 * R)) * rand() / RAND_MAX - (2 * R);


		if ((x + R) * (x + R) + (y - R) * (y - R) <= (R * R) ||
			0 <= x && x <= R && 0 <= y && y <= -R)
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}