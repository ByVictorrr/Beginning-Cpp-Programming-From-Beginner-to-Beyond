#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    public:
        // attributes
        string name;
        int health;
        int xp;

        // methods
        void talk(string say){cout << name << "says " << say;};
        bool is_dead();
};

class Account{

public:
    // attributes
    string name;
    double name;

    //methods
    bool deposit(double bal);
    bool withdraw(double bal);

};


int main(){
    Player frank;
    frank.health=100;
    frank.xp=12;
    frank.name = "frank";

    Player *enemy = new Player;
    //(*enemy).name = "Enemy";
    enemy->name = "enemy";



    return 0;
}