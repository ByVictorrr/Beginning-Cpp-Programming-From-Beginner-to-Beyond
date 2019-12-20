#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string guest_list[], int size);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string guest_list[], int size);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                      
//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    
    print_guest_list(guest_list, guest_list_size);

    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
    

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string guest_list[], int size){

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for(int i = 0; i < size; i ++)
        cout << guest_list[i] << endl;
    

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name();
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string guest_list[], int size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for(int i = 0; i < size; i ++)
        guest_list[i] = " ";
    


    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}