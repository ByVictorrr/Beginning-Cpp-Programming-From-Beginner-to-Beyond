#include <iostream>
#include <cstring>
using namespace std;

void strings_and_functions() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
	char *first_name = "Bjarne", 
		 *last_name = "Stroustrup",
		 whole_name[strlen(first_name) + strlen(last_name) + 1];

	strcpy(whole_name, first_name);
	strcat(whole_name, " ");
	strcat(whole_name, last_name);



    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}
