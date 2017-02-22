#include <iostream>
using namespace std;

int main() {
	char input;
	cout << "what kind of cookies would you like? Bochlate Bhip Bookies 'c', Sugar Bookies 's', Oreos 'o', Vanilla Wafers 'v'?";
	cin >> input;
	switch (input) {
	case 'c':
		cout << "Bocklate Bhip Bookies";
		break;
	case 's':
		cout << "Sugar Bookies";
		break;
	case 'o':
		cout << "Oreos";
		break;
	case 'v':
		cout << "Vanilla Wafers";
		break;
	}
}