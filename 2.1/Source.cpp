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
			cout << "Знаменник не може дорiфвнювати нулю!! " << endl;
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

	cout << "Чисельник: ";
	cin >> first.first;
	cout << "Знаменник: ";
	cin >> first.second;
	cout << "Ответ: ";
	first.ipart();

	return 0;
}