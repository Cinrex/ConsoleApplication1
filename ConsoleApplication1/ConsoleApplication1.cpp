#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;

	if ((a < 180 && a>0) && (b < 180 && b>0) && (c < 180 && c>0) && (a + b + c == 180)) {  // Проверяем, существует ли треугольник с углами a b c

		if ((a < 90) && (b < 90) && (c < 90)) {
			cout << "octr" << " a=" << a << " b=" << b << " c=" << c << endl;
		}

		else if ((a == 90) || (b == 90) || (c == 90)) {
			cout << "pram" << " a=" << a << " b=" << b << " c=" << c << endl;
		}

		else if ((a > 90) || (b > 90) || (c > 90)) {
			cout << "typ" << " a=" << a << " b=" << b << " c=" << c << endl;
		}

	}

	else {
		cout << "error" << " a=" << a << " b=" << b << " c=" << c << " sum=" << a + b + c << endl;
	}

	return 0;
}