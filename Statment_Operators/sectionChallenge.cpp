#include <iostream>
#include <vector>

enum cents{DOLLARS, QUARTERS, DIMES, NICKLES, PENNIES};
using namespace std;



int main(int argc, char *argv[]){

	int cents;
	vector<int> money = {0, 0, 0, 0, 0};
	cout << "enter in cents: " << endl;
	cin >> cents;


	if (cents >= 100){
		money.at(DOLLARS) = ((cents/100));
		cents -= (cents/100)*100;
	}
	if (cents >= 25){
		money.at(QUARTERS) = ((cents/25));
		cents -= (cents/25)*25;
	}
	if (cents >= 10){
		money.at(DIMES) = ((cents/25));
		cents -= (cents/10)*10;
	}
	if (cents >= 5){
		money.at(NICKLES) = ((cents/5));
		cents -= (cents/5)*5;
	}
	if (cents >= 1){
		money.at(PENNIES) = ((cents/25));
		cents -= (cents/1)*1;
	}


	for(int i = 0; i<5; i++){
		cout << money.at(i) << endl;

	}
	return 0;
}
