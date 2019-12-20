#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <iostream>
#include <string.h>

class Mystring{
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
        bool operator==(const Mystring &);
        Mystring operator-();
        Mystring operator+(const Mystring &);
        Mystring operator+(const char *);

        // basic methods
        void display() const;
        int get_length() const;
        const char *get_str() const;

};

#endif