#include <iostream>
using namespace std;

int main () {
	float price, discount, discountRate, total;
	cout << "Buying price: ";
	cin >> price;
	cout << "Discount rate in percent: ";
	cin >> discount;
	discountRate = discount / 100;
	total = price - (price*discountRate);
	cout << "For buying price PHP " << price << " and discount rate " << discountRate << "\n";
	cout << "The total price is PHP " << total;
	
}
