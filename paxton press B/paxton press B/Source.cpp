#include <iostream>
#include <string>
using namespace std;
int main() {


	
	char input;
	int score = 0;

	cout << " press B because you have no skill to do otherwis..." << endl << endl;
	cin >> input;
	
	while (input =='b') {

		score = score + 1 ;
		cin >> input;
	}
	cout << score << endl << endl;


}