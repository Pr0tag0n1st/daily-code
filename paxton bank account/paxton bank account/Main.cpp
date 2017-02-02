#include<iostream>
using namespace std;
int main() {
	double input;
	double sum;
	cout << "How much money do you want to take from your bank account??" << endl;
	cin >> input;
	sum = 1000.00 - input;
	cout << "Your balance is now " << sum << endl;
}