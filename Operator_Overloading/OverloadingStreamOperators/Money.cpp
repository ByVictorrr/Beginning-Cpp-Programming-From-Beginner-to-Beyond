#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----


std::ostream &operator<<(std::ostream &os, const Money & m ){
    os << "dollars: " << m.dollars << " cents: " << m.cents;
    return os;
}
//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


