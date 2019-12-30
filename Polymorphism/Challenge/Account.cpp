#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}


std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}
