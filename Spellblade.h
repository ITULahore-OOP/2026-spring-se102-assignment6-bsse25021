#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include<iostream>
#include<string>
#include"Warrior.h"
#include"MagicalEntity.h"
using namespace std;

class SpellBlade : public Warrior , public MagicalEntity{
public:
    SpellBlade(string name,int h,int bp,int rating,int mp,int sp);
    int calculateHybridDamage();
};




#endif
