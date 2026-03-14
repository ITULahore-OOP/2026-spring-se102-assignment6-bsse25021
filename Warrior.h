#ifndef WARRIOR_H
#define WARRIOR_H

#include<iostream>
#include<string>
#include"Hero.h"
using namespace std;

class Warrior : public Hero{
private:
    int armorRating;
public:
    Warrior(string name,int h,int bp,int rating);
    int getArmor();
    int calculateEffectiveHealth();
};
#endif