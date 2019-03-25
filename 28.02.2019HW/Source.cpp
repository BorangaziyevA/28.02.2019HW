#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

////////////////////1///////////////1//////////////
double a(double x)
{
	return sqrt(x);
}

double b(double x)
{
	return x * x * x;
}

double c(double x)
{
	return sin(x);
}

int main()
{
	setlocale(LC_ALL, "");

	double(*funcs[])(double) = { a, b, c };

	double x;
	cout << "������� x: ";
	cin >> x;
	int ch;
	do
	{
		cout << "�������� �������: ";
		cin >> ch;
	} while (ch < 1 || ch > 3);

	cout << "���������: " << funcs[ch - 1](x) << endl;

	system("pause");
}