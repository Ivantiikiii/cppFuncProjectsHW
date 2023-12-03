#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	float one, two, three;
	cout << "Введите зп за первый месяц: ";
	cin >> one;
	cout << "Введите зп за второй месяц: ";
	cin >> two;
	cout << "Введите зп за третьий месяц: ";
	cin >> three;

	cout << "Зп за квартал: " << one + two + three;

	return 0;
}
