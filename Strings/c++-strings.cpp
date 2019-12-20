#include <iostream>
#include <string>


using namespace std;


int main(){
	string s0;
	string s1 = {"Apple"};
	string s2 = {"Banna"};
	string s3 = {"apple"};
	string s4 = "Kiwi;
	string s5 = s1;
	string s6 = {s1,0,3};
	string s7 = (10, 'X');



	// Initalization
	cout << "s1 is init to: " << s1 << endl;
	cout << "s2 is init to: " << s2 << endl;
	cout << "s3 is init to: " << s3 << endl;
	cout << "s4 is init to: " << s4 << endl;
	cout << "s5 is init to: " << s5 << endl;
	cout << "s6 is init to: " << s6 << endl;
	cout << "s7 is init to: " << s7 << endl;

	

	
	/* 
	cout << boolalpha;
	cout << s1==s2 ;
	cout << s1 == s3;
	*/

	// Substrings
	//
	s1 = "This is a test";

	cout << s1.substr(0,4) << endl; // This
	cout << s1.substr(5,2) << endl; // is
	cout << s1.substr(10,4) << endl; // test



	// Erase
	s1.erase(0,5); // Erase this from s1 in "is a test"


	// getLine
	
	string full_name = "";
	getline(cin, full_name); // gets till new line char

	// Find
	s1 = "The secret word is Boo";

	string words;

	cout << "Enter the word to the find";
	cin >> word;

	size_t position = s1.find(word);
	if(position != string::npos){
		cout << "Found";
	}else{
		cout << "Not Found";
	}


	









}
