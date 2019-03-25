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
	cout << "Введите x: ";
	cin >> x;
	int ch;
	do
	{
		cout << "Выберите функцию: ";
		cin >> ch;
	} while (ch < 1 || ch > 3);

	cout << "Результат: " << funcs[ch - 1](x) << endl;

	system("pause");
}