#include <iostream>
#include <cstring> // c style string functions
#include <cctype> // for character-base functions


using namespace std;

int main(){
	char first_name[20], last_name[20], full_name[50], temp[50];

	//;cout << "please enter your first name";
	cout << "your full name is " << full_name << endl;
	cin.getline(full_name, 50);
	/*  
	//cin >> first_name;
	cout << "please enter your last name";
	cin >> last_name;

	strcpy(full_name,first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	*/
	cout << "your full name is " << full_name << endl;



	return 0;

}
