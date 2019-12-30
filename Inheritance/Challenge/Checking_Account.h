
#ifndef CHECKING_ACCOUNT_H_
#define CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account: public Account
{
    public:
        Checking_Account();
        ~Checking_Account();

        bool withdraw(double amount){
            return Account::withdraw(amount+1.5);
        }



};

#endif