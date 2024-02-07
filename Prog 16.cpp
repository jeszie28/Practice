#include <iostream>
using namespace std;

int main () {
	int num1;
	cout << "Enter a number: ";
	cin >> num1;
	
	cout << "\n Value before being increment." << num1 << "\n";
	num1++;
	cout << "\n Value after being increment. " << num1 << "\n";
	num1--;
	cout << "\n Value before being decrement. " << num1 << "\n";
	num1--;
	
	cout << "\n Value after being decrement. " << num1;
	
}
