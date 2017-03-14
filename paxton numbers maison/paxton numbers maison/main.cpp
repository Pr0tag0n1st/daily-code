#include <iostream>
using namespace std;
int main() {
	int input;
	int input2;
	int input3;
	cout << "pick a 3 positive number" << endl << endl << endl;
	cin >> input;
	cin >> input2;
	cin >> input3;
	for (int i = 0; i = 20; i++)
		if (input > input2&&input2 > input3)
			cout << input << endl;
		else if (input2 > input&&input > input3)
			cout << input2 << endl;
		else if (input3 > input2&&input2 > input)
			cout << input3 << endl;


}