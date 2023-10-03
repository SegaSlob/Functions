// Functions
#include <iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << '\n';
	cout << a << " - " << b << " = " << Sub(a, b) << '\n';
	cout << a << " * " << b << " = " << Mul(a, b) << '\n';
	cout << a << " / " << b << " = " << Div(a, b) << '\n';
}
 int Add (int a, int b)
{
	 // Addition - сложение
	int c = a + b;
	return c;

}
 int Sub(int a, int b)
 {
	 //Subtraction - вычетание
	 return a - b;
 }
 int Mul(int a, int b)
 {
	 // Multiplication - умнажение
	 return a * b;
 }
 double Div(int a, int b)
 {
	 // Division - Деление
	 return (double)a / b;
 }


