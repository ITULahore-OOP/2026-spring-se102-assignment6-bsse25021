#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include<iostream>
#include<string>
using namespace std;


class MagicalEntity{
private:
    int manaPool;
    int spellPower;
public:
    MagicalEntity(int mp,int sp);
    int getMana() const;
    int getSpellPower() const;

};







#endif