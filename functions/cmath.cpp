#include <iostream>
#include <cmath>
using namespace std;

void c_math_functions() {
    
    double bill_total {102.78};
    int number_of_guests {5};
	float individual_bill_1, individual_bill_2, individual_bill_3;

    
    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
	individual_bill_1 = floor(bill_total/number_of_guests);
	individual_bill_2 = round(bill_total/number_of_guests);
	individual_bill_3 = ceil(bill_total*100/number_of_guests)/100;


    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
}
