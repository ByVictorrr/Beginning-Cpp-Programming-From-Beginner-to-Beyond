// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 
std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}




int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account*> accounts;
    accounts.push_back(new Savings_Account("Wonderwoman", 5000, 5.0));
    accounts.push_back(new Checking_Account("Bones", 5000));
    accounts.push_back(new Trust_Account {"Porthos", 20000, 4.0} );

  
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(accounts, 1000);
    
    display(accounts);

    
    for(auto ptr: accounts)
        delete ptr;

    return 0;
}

