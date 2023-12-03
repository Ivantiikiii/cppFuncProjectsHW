#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	float one, two, three, four;
	cout << "Введите оценку за первую четверть: ";
	cin >> one;
	cout << "Введите оценку за вторую четверть: ";
	cin >> two;
	cout << "Введите оценку за третью четверть: ";
	cin >> three;
	cout << "Введите оценку за четвертую четверть: ";
	cin >> four;

	cout << "Средняя оценка за год: " << (one + two + three + four) / 4;

	return 0;
}
