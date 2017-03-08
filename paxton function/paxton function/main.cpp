#include <iostream>
using namespace std;
void math();
void math2();
void math3();
double x;

int main() {


	cout << "enter your number" << endl;
	cin >> x;

	math();
	math2();
	math3();

}


































void math() {
	x = x + 1;
	cout << x << endl;
}
void math2() {
	x = x - 56;
	cout << x << endl;
}
void math3() {
	x = x * 2;
	cout << x << endl;
}