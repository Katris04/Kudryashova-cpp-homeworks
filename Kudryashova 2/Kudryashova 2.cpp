#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	locale::global(locale(""));
	cout << "Введите два числа";
	int a, b;
	cin >> a >> b;
	cout << "сумма чисел равна" << a+b << endl;
	if (a >= b) {
		cout << "разность чисел равна" << a - b << endl;
	}
	if (a < b) {
		cout << "разность чисел равна" << b - a << endl;
	}
	cout << "произведение чисел равно" << a*b << endl;
	return 0;
}