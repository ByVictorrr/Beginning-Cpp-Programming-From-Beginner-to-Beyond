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
    : Mystring(source.str)
    {

    }

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

   bool Mystring::operator==(const Mystring &s){
       if(strcmp(this->str, s.str) == 0)
           return true;
        else
            return false;
   }

   Mystring Mystring::operator-(){
       // Converts everything in source to lower case
       char *buff = new char[strlen(str)+1];
       strcpy(buff, str);
       for(int i = 0; i< strlen(buff); i ++){
           buff[i] = tolower(buff[i]);
       }
        Mystring ret(buff);
        delete [] buff;

        return ret;
   }


    Mystring Mystring::operator+(const Mystring & another){
        // concats two mystring essentially
        char *concat = new char[strlen(this->str) + strlen(another.str) + 1];
        strcpy(concat, this->str);
        strcat(concat, another.str);
        Mystring ret(concat);
        delete [] concat;
        return ret;
    }
    Mystring Mystring::operator+(const char * another){
        // concats one c-style string and one mystring
        char *concat = new char[strlen(this->str) + strlen(another) + 1];
        strcpy(concat, this->str);
        strcat(concat, another);
        Mystring ret(concat);
        delete [] concat;
        return ret;
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

