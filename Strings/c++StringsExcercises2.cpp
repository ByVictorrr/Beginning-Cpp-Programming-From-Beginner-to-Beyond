#include <iostream>

#include <string>

using namespace std;


    

void cpp_strings() {
	    
	    string journal_entry_1 {"Isaac Newton"};
		string journal_entry_2 {"Leibniz"};

    
		journal_entry_1.erase(0,6);

		if ( journal_entry_2 < journal_entry_1){
			string temp = journal_entry_2;
			journal_entry_2 = journal_entry_1;
			journal_entry_1 = temp;
		}

        cout << journal_entry_1 << "\n" << journal_entry_2;

    //----WRITE YOUR CODE ABOVE THIS LINE----

    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    


}
int main(){

	cpp_strings();
}
