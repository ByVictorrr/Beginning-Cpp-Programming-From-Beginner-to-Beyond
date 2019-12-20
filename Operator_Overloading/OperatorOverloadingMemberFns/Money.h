#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H


#include <iostream>

class Money {
    int dollars;
    int cents;
public:
    Money(int dollars, int cents); 
    Money(int total);   
    bool operator==(const Money&);
    bool operator!=(const Money&);


    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----
    
    
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
};


#endif //_MONEY_MONEY_H
