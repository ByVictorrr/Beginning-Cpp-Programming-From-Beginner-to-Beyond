#include <iostream>
using namespace std;

void print_grocery_list(int apples=3, int oranges=7,int mangos=13);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void modify_grocery_list(){
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    

    print_grocery_list();
	print_grocery_list(5);
    print_grocery_list(7,11);

    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

void print_grocery_list(int apples, int oranges,int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                     //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}