#include<iostream>
#include<locale>
using namespace std;
int main() {
	locale::global(locale(""));
	int a, b;
	cout << "введите первое число: ";
	cin >> a;
	cout << "введите второе число:";
	cin >> b;
	if (a >= b) {
		cout << "остаток от деления равен " << a % b;
	}
	else {
		cout << "остаток от деления равен " << b % a;
	}
	return 0;
}