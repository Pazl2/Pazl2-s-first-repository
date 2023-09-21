#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	long double first_num, second_num, third_num, summ, summ2, summ3, summ4;

	cout << "Программа для подсчёта суммы, произведения, среднего арифметического и среднего геометрического двух чисел" << endl << endl;

	cout << "Введите первое число: ";
	cin >> first_num;

	cout << "Введите второе число: ";
	cin >> second_num;

	cout << "Введите третье число: ";
	cin >> third_num;

	summ = first_num + second_num + third_num;
	summ2 = first_num * second_num * third_num;
	summ3 = summ / 3;




	cout << "Сумма этих чисел: " << summ << endl;
	cout << "Произведение этих чисел: " << summ2 << endl;
	cout << "Среднее арифметическое этих чисел: " << summ3 << endl;
	if (summ2 >= 0) {
		summ4 = cbrt(summ2);
		cout << "Среднее геометрическое этих чисел: " << summ4 << endl;
	}
	else cout << "Среднее геометрическое этих чисел найти невозможно, так как под корнем получается отрицательное число" << endl;



}

