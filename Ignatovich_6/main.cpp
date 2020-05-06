#include <iostream>
#include <iomanip>

using namespace std;

double min(double a, double b)
{
	if (a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double max(double a, double b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double sred(double a, double b)
{
	return (a + b) / 2;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double d1, d2;
	cout << "Введите первое число: ";
	cin >> d1;
	cout << "Введите второе число: ";
	cin >> d2;

	double A[3];
	A[0] = max(d1, d2);
	A[1] = min(d1, d2);
	A[2] = sred(d1, d2);

	cout << "A: ";
	for (int i = 0; i < 3; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}
