#include <iostream>
using namespace std;
void BadGuy();
int main() {
	for (;;) {
		BadGuy();
		system("pause");
	}
}
void BadGuy() {
	int number = rand() % 100 + 1;
	if (number < 50)
		cout << "a super scary GOOMBA appears!!!" << endl;
	else if (number >= 50 && number < 80)
		cout << "Koopa!" << endl;
	else
		cout << "Shy guy" << endl;

	
	
}