#include<iostream>
#include<locale>
using namespace std;
int main() {
	locale::global(locale(""));
	cout << "введите число:";
	int n, sum = 0, a = 1;
	cin >> n;
	if (n < 1) {
		cout << "число должно быть больше или равно единице";
		return 1;
	}
    while (a <= n) {
		sum = sum + a;
		a = a + 1;
		}
	cout << "сумма всех чисел от 1 до " << n << ": " << sum;
	
	return 0;
}