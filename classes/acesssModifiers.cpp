#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{

private:
    // attributes
    string name;
    double balance;

public:
    //methods
    bool deposit(double bal);
    bool withdraw(double bal);
    void set_name(string n);
    string get_name();
};

void Account::set_name(string name){
    name = name;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double d){
    balance+=d;
    return true;
}

bool Account::withdraw(double d){
    if(balance-d >= 0){
        balance-=d;
        return true;
    }else{
        return false;
    }


    return true;
}

int main(){
    Account frank_account;
    frank_account.set_name("Franks Account");


    return 0;
}