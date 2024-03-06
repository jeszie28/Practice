#include <iostream>
#include <cstring>
using namespace std;

int main () {
	char x [] = "Happy Birthday to You";
	char y [25], z [15];
	
	cout << "The string is array z is: " << x;
	cout << "\nThe string in array y is: " << strcpy ( y, x);
	cout << '\n';
	
	strncpy ( z, x, 14); 
	z [14] = '\0';
	
	cout << "The string in array z is: " << z << endl;
	
	return 0;
}
