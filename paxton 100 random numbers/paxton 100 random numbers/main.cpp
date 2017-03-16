#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int sum = 0;
	int num;
	int input = 0;

	for (int i = 0; i < 100; i++){
		num= rand() % 1001;
		cout << num << endl;
		sum = sum + num;

		if(num > input)
			input = num;
	
	
	}

	cout << "The Biggest Number Is" << input << endl;
	cout << "The average is" << sum / 100 << endl << endl;

	

}