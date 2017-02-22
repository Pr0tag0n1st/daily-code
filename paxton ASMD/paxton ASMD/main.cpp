#include <iostream>
using namespace std;
int main() {
	char a;
	int s;
	int m;
	double sum;
	cout << "Would you like to add(a), subtract(s), *(m) or divide(d) ?" << endl;
	cin >> a;
	cout << "which two numbers would you like to add?" << endl;
	cin >> s;
	cin >> m;
	switch (a) {
	case'a':
		sum = m + s;
		cout << s << "+" << m << "=" << sum << endl;
		break;

	case's':
		sum = s - m;
		cout << s << "-" << m << "=" << sum << endl;
		break;

	case'm':
		sum = s*m;
		cout << s << "*" << m << "=" << sum << endl;
		break;

	case'd':
		sum = s / m;
		cout << s << "/" << m << "=" << sum << endl;
		break;
	}

}