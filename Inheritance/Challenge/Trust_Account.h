#ifndef TRUST_ACCOUNT_H_
#define TRUST_ACCOUNT_H_

#include "Account.h"

class Trust_Account: public Account{
    private:
        int int_rate;
    public:
        
        bool deposit(double amount){
            if(amount >= 5000){
                amount +=50;
            }
            amount += amount * (int_rate/100);
            return Account::deposit(amount);
        }

        bool withdraw(double amount){
            static int withdraws = 0;
            if(Account::withdraw(amount) && withdraws < 4 && amount < .2 * balance){
                withdraws++;
                return true;
            }else{
                return false;
            }
        }

};


#endif
