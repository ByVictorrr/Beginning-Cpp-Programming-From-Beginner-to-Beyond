#ifndef I_PRINTABL_H_
#define I_PRINTABL_H_
#include <iostream>
using namespace std;


class I_Printable{ // interface
    public:
        friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
        virtual void print(std::ostream &os) const = 0;
        virtual ~I_Printable() = default;
};

#endif



