#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main () {
	char s1[] = "Happy New Year";
	char s2[] = "Happy New Year";
	char s3[] = "Happy Holidays";
	
	cout << "\ns1 = " << s1 << "\ns2 = " << s2;
	cout << "\ns3 = " << s3 << "\n \nstrcmp (s1, s2) = ";
	cout << "\nstrcmp (s1, s3) = " << setw (2);
	cout << strcmp (s1, s3) << "\nstrcmp (s3, s1) = ";
	cout << setw (2) << strcmp (s3, s1);
	cout << "\n\nstrncmp (s1, s3, 6) = " << setw (2);
	cout << strncmp (s1, s3, 6) << "\nstrncmp (s1, s3, 7) = ";
	cout << setw (2) << strncmp (s1, s3, 7);
	cout << "\nstrncmp (s3, s1, 7) = ";
	cout << setw (2) << strncmp (s3, s1, 7) << endl;
	
	return 0;
}
