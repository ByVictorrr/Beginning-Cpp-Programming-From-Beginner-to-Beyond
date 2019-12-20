#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <iostream>
#include <string.h>

class Mystring{
	friend bool operator==(const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator-(const Mystring &obj);
	friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);

    private:
        char *str;
    public:
        // constructors
        ~Mystring();
        Mystring();
        Mystring(char *str);
        Mystring(const Mystring &source);

        // operators
        Mystring &operator=(const Mystring &);
        Mystring &operator=(Mystring &&);
        // basic methods
        void display() const;
        int get_length() const;
        const char *get_str() const;

};

#endif
