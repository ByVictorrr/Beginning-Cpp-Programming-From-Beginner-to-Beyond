#ifndef INSUFFIENTFUNDSEXCEPTION_H_
#define INSUFFIENTFUNDSEXCEPTION_H_
#include <iostream>

class InsuffientFundsException: public std::exception
{
public:
    InsuffientFundsException()=default;
    ~InsuffientFundsException()=default;
    virtual const char * what() const noexcept{
        return "Insuffient funds";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
