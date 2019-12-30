#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException: public std::exception{
public:
    IllegalBalanceException() {}
    ~IllegalBalanceException() {}
    virtual const char * what() const noexcept{
        return "Negative balance error";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
