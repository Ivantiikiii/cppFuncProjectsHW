#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "RU");

	int radius;
	cout << "Введите радиус: ";
	cin >> radius;

	cout << "Площадь круга: " << 3.14 * (radius * radius) << endl;
	cout << "Длинна окружности: " << radius * 2 * 3.14 << endl;
	cout << "Диаметр окружности: " << radius * 2 << endl;
	return 0;
}
