#include<iostream>
#include<locale>
using namespace std;
int main() {
	locale::global(locale(""));
	cout << "введите год:";
	int year;
	cin >> year;
	if (year % 400 == 0) {
		cout << "год високосный";
	}
	else if (year % 4 == 0 and year % 100 != 0) {
		cout << "год високосный";
	}
	else
		cout << "год не високосный";
	return 0;
}