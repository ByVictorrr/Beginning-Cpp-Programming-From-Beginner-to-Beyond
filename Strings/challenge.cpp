/* Section 10
 * Challenge - Subtitution Cipher
 *
 * Objective: enter a message, encrypt it from a key string (only lower case)"
 *
 *
 *
 *
 *
 *  */

#include <iostream>
#include <string>

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz"; // ABCDEFGHIJKLMNOPQRSTUVWXYZ";



string get_key(){
	string key;
	cout << "Enter in 26 distinct chars: ";	
	getline(cin, key);
	return key;
}
string get_msg(){
	string msg;
	cout << "Enter in message: ";	
	getline(cin, msg);
	return msg;
}


string encrypt(string msg, string key){
	string enc;
	int pos;
	for(char c: msg){
		pos = alphabet.find(c);
		if (pos != string::npos)
			enc+=key.at(pos);
	}
	return enc;
}
string decrypt(string enc, string key){
	string dec;
	int pos;
	for(char c: enc){
		pos = key.find(c);
		if (pos != string::npos)
			dec+= alphabet.at(pos);
	}
	return dec;
}
int main(){


	string enc, dec, key;

	enc = encrypt(get_msg(), key = get_key());
	dec = decrypt(enc, key);
	cout << "encrypted message is : " << enc << endl;
	cout << "decrypted message is : " << dec << endl;


	return 0;
}
