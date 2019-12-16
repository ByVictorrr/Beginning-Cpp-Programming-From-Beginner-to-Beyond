#include <iostream>
#include <string>
using namespace std;

int main(){

	int num_smalls = 0, 
		num_bigs = 0;
	const int PRICE_PER_SMALL = 25, 
			  PRICE_PER_BIG = 35;
	const float TAX = .06;
	float cost =0;


	cout << "Enter big rooms: ";
	cin >> num_bigs;
	
	cout << "Enter small rooms: ";
	cin >> num_smalls;


	cout << "Cost: " << (cost = num_bigs * PRICE_PER_BIG + num_smalls * PRICE_PER_SMALL) << "$" << endl;
	cout << "Tax: " << cost * TAX << "$" << endl;


	return 0;
}
