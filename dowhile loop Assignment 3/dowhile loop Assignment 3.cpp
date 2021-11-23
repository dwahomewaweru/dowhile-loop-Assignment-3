// do..while loop Assignment 3.
// C++ program that computes the sum of numbers between 20 and 25 using do...while loop.

#include <iostream>
using namespace std;

int main() {
	// Declare and initialize variable
	int number;
	int sum{};

	// do..while loop to compute sum of numbers
	do {
		cout << "Please input numbers between 20 and 25 then enter 0 to stop and view sum:\n ";
		cin >> number;
		sum += number;
	} while (number != 0);
	cout << " Sum of the numbers is : " << sum << endl;

	//Output when the user enters 0 to end loop
	return 0;
}
