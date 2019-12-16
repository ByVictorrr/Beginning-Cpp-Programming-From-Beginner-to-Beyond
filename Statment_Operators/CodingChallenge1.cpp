
#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if ( (age > 17 | age > 15 && parental_consent) && ssn && !accidents )//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work.";
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return;
}
