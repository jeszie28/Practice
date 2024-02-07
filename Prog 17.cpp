#include <iostream>
using namespace std;

int main () {
	char input;
	cout << "Enter a character: ";
	cin >> input;
	
	if (( input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
		cout << "Your have enter a character. \n";
	else 
		cout << "Invalid input. \n";
}
