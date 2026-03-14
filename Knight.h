#ifndef KNIGHT_H
#define KNIGHT_H

#include<iostream>
#include<string>
#include"Warrior.h"
using namespace std;

class Knight : public Warrior{
private:
    int chargeBonus;
public:
    Knight(string name,int h,int bp,int rating,int cbonus);
    int getChargeBonus();
    int calculateBurstDamage();
};


#endif