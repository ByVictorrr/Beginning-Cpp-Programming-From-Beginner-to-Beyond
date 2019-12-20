#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

bool Money::operator==(const Money& comp){
    if(this->cents == comp.cents 
       && this->dollars == comp.dollars){
           return true;
       }else{
           return false;
       }
}
bool Money::operator!=(const Money& comp){
     if(this->cents != comp.cents 
       || this->dollars != comp.dollars){
           return true;
       }else{
           return false;
       }

}



   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


