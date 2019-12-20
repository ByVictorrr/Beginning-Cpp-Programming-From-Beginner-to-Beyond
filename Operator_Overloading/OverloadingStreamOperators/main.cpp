#include "Mystring.h"

using namespace std;
int main(){

	Mystring larry("larry");
	Mystring moe("Moe");
	Mystring curly;

	cout << "Enter the thrid stooges first name: ";
	cin >> curly;

	cout << "The three stoogest are" << larry << ", " << moe << ", and " << curly << endl;

	cout << "\n Enter the threee stoogest names sep. by a space: ";
	cin >> larry >> moe >> curly;

	cout << "The three stoogest are" << larry << ", " << moe << ", and " << curly << endl;



	return 0;
}
