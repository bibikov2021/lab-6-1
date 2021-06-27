#include <iostream>
using namespace std;

int big(int a, int b, int c) {
	if (a > b)
	{
		if (a > c)
			return a;
		else return c;
	}
	else {
		if (b > c)
			return b;
		else return c;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "¬ведите числа через пробел: ";
	cin >> a >> b >> c;
	cout << big(a, b, c) << endl;


	return 0;
}