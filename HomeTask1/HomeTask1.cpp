#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	long double first_num, second_num, third_num, summ, summ2, summ3, summ4;

	cout << "��������� ��� �������� �����, ������������, �������� ��������������� � �������� ��������������� ���� �����" << endl << endl;

	cout << "������� ������ �����: ";
	cin >> first_num;

	cout << "������� ������ �����: ";
	cin >> second_num;

	cout << "������� ������ �����: ";
	cin >> third_num;

	summ = first_num + second_num + third_num;
	summ2 = first_num * second_num * third_num;
	summ3 = summ / 3;




	cout << "����� ���� �����: " << summ << endl;
	cout << "������������ ���� �����: " << summ2 << endl;
	cout << "������� �������������� ���� �����: " << summ3 << endl;
	if (summ2 >= 0) {
		summ4 = cbrt(summ2);
		cout << "������� �������������� ���� �����: " << summ4 << endl;
	}
	else cout << "������� �������������� ���� ����� ����� ����������, ��� ��� ��� ������ ���������� ������������� �����" << endl;



}

