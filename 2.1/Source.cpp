#include <iostream>
#include <string>

using namespace std;

class Fraction {
public:
	int first;
	int second;

	Fraction(int first, int second) {
		this->first = first;
		this->second = second;
	}

	void ipart()
	{
		if (second == 0)
		{
			cout << "��������� �� ���� ���i�������� ����!! " << endl;
		}
		else
		{
			cout << first / second << endl;
		}

	}
};

int main()
{
	setlocale(LC_ALL, "ukr");

	Fraction first(15,44);

	cout << "���������: ";
	cin >> first.first;
	cout << "���������: ";
	cin >> first.second;
	cout << "�����: ";
	first.ipart();

	return 0;
}