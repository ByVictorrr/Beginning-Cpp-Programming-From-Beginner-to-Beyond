#include <iostream>
#include <string>
#include "Mystring.h"


    Mystring::~Mystring(){
        //delete [] str;
    }
    Mystring::Mystring()
    :str(nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    Mystring::Mystring(char *str)
    : str(nullptr)
    {
        this->str = new char[strlen(str)+1];
        strcpy(this->str, str);
    }
    Mystring::Mystring(const Mystring &source)
    : Mystring(source.str){}
    

    Mystring &Mystring::operator=(const Mystring &lhs){
        if (this == &lhs){
            return *this;
        }else{
            delete [] str;
            str = new char[strlen(lhs.str)+1];
            strcpy(str, lhs.str);
        }
        return *this;
    }

 Mystring &Mystring::operator=(Mystring &&rhs){


        if (this == &rhs){
            return *this;
        }
            delete [] str;
            str = rhs.str;
            rhs.str = nullptr;
            
            strcpy(str, rhs.str);

            return *this;
   }

    void Mystring::display() const{
        std::cout << this->str << std::endl;
    }
    int Mystring::get_length() const{
        return strlen(this->str);
    }
    const char* Mystring::get_str() const{
        return str;
    }


//Equality



	bool operator==(const Mystring &lhs, const Mystring &rhs){
        if(strcmp(lhs.str, rhs.str) == 0)
            return true;
        return false;
    }
	Mystring operator-(const Mystring &obj){
        char *buff = new char[strlen(obj.str) + 1];
        strcpy(buff, obj.str);
        for(size_t i=0; i<strlen(buff); i++)
            buff[i] = tolower(buff[i]);
        Mystring temp(buff);
        delete [] buff;
        return temp;
    }
	Mystring operator+(const Mystring &lhs, const Mystring &rhs){
        char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
        strcpy(buff, lhs.str);
        strcat(buff, rhs.str);

        Mystring temp(buff);
        delete [] buff;
        return temp;
    }