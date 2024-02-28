#include <iostream>
using namespace std;

void add ();
void sub ();
void mul ();
void div ();
void mod ();

int num1, num2;
float ans;

int main () {
int ch;

	do {
		cout << "\n \t \t <<< Program of Operations >>> ";
		cout << "\n \n 1. \t Addition \n 2. \t Subtraction \n 3. \t Multiplication \n 4. \t Division \n 5. \t Modulus \n 6. \t Exit ";
		cout << "\n Enter your choice: ";
		cin >> ch;
		
		switch (ch) {
			case 1:
				add ();
				break;
			case 2:
				sub ();
				break;
			case 3:
				mul ();
				break;
			case 4:
				div ();
				break;
			case 5:
				mod ();
				break;
			case 6:
				return 0;
			default: 
				cout << "\n \n Invalid input. Please try again. \n";
		}
	} while ( ch != 6);
}

void add () {
	cout << "\n Enter two number to add: ";
	cin >> num1 >> num2;
	ans = num1 + num2;
	cout << "\n Sum is " << ans << "\n";
}

void sub () {
	cout << "\n Enter two number to subtract: ";
	cin >> num1 >> num2;
	ans = num1 - num2;
	cout << "\n Difference is " << ans << "\n";
}

void mul () {
	cout << "\n Enter two number to mu;ltiply: ";
	cin >> num1 >> num2;
	ans = num1 * num2;
	cout << "\n Product is " << ans << "\n";
}

void div () {
	cout << "\n Enter two number to divide: ";
	cin >> num1 >> num2;
	ans = num1 / num2;
	cout << "\n  Quotient is " << ans << "\n";
}

void mod () {
	cout << "\n Enter two number for modulus: ";
	cin >> num1 >> num2;
	ans = num1 % num2;
	cout << "\n Remainder is " << ans << "\n";
}
