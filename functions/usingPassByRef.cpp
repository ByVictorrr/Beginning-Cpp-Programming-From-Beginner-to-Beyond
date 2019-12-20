
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string &guest1, const string &guest2, const string &guest3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(  string &guest1,  string &guest2,  string &guest3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
    print_guest_list(guest1,guest2,guest3);
    clear_guest_list(guest1, guest2, guest3);
    print_guest_list(guest1,guest2,guest3);


    
    
    

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----


string print_guest_list(const string &guest1, const string &guest2, const string &guest3){//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
	cout << guest1 << endl;
	cout << guest2 << endl;
	cout << guest3 << endl;
    
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----


void clear_guest_list(  string &guest1,  string &guest2,  string &guest3){//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
	guest1 = " "; 
	guest2 = " ";
	guest3 = " ";
    
        
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
