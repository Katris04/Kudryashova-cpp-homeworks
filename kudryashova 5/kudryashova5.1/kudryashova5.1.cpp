#include <cmath>
#include <iostream>
#include <locale>
using namespace std;
int main() {
	locale::global(locale(""));
	cout << "Введите радиус круга:";
	double r;
	cin >> r;
	double s;
	s = 3.14 * r * r;
	cout << "радиус круга:" << s;
	return 0;
}