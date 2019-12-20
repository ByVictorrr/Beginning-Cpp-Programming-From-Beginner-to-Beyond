#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money operator+(const Money &rhs, const Money &lhs){
    int dollars = rhs.dollars + lhs.dollars;
    int cents = rhs.cents + lhs.cents;
    Money temp(dollars, cents);
    return temp;
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


