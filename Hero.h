#ifndef HERO_H
#define HERO_H

#include<iostream>
#include<string>
using namespace std;

class Hero{
private:
    string heroName;
    int health;
    int basePower;
public:
    //constructor and destructor
    Hero();
    Hero(string name,int h,int bp);
    ~Hero();
    //getters
    string getName() const;
    int getHealth() const;
    int getPower() const;

    void takeDamage(int damage);
    //overloaded operator functions
    bool operator>( Hero other);
    int operator+( Hero other);
 

};




#endif