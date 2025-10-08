#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	locale::global(locale(""));
	double number;
	cout << "Введите число";
	cin >> number;
	cout << "Как double:" << number << endl;
	int intValue = static_cast<int>(number);
	cout << "Как int:" << intValue << endl;
	bool boolValue = static_cast<bool>(number);
	cout << "Число не равно 0?" << boolalpha << boolValue << endl;
	return 0;
}