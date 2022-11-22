#include <iostream>
using namespace std;

int main() {
  int evens = 0, odds = 0;
  int number;

  cout << "Enter an integer: ";
  cin >> number;

	while (number != 0) {
		if (number % 2 == 1)		
			odds++;
		else
			evens++;
		cin >> number;
	}

    cout << "Even numbers: " << evens << endl;
	cout << "Odd numbers: " << odds << endl;
}