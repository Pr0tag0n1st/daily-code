//In your UNIX shell, create a program that ask a user for a number,
//and then calculates the smallest prime number BIGGER than that number.

#include <iostream>
using namespace std;
int main() {

	int num;
	bool prime = true;

	cout << "what number you want bruh?" << endl;
	cin >> num;

	while (1) {
		prime = true;
		num++;

		for (int i = 2; i < num; i++)
			if (num % i == 0)
				prime = false;

		if (prime) {
			cout << num << " is your first prime number" << endl;
			return 0;
		}
		else
			cout << "not prime" << endl;
	}
}